// Windows Process Enumerater
// HTB Re-Coded
// Windows Enumeration 


#include <Windows.h> // Windows API
#include <stdio.h> // Input/Output Operations
#include <TlHelp32.h> // ToolHelp API 

int Error(const char *msg) {
	printf("%s (%u)", msg, GetLastError()); // Get Error code that happened last
	return 1;
}

int main()
{
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); //Create ToolHelp Snapshot
	if (hSnapshot == INVALID_HANDLE_VALUE)
		return Error("Failed to create snapshot");

	PROCESSENTRY32 pe; // Structure
	pe.dwSize = sizeof(pe); // Eq size of structure

	if (!Process32First(hSnapshot, &pe))
		return Error("Failed in Process32First");

	do {
		printf("PID: %6u (PPID: %6u) Threads: %3u %ws\n", // Process ID's are 32-bit unsigned-Intergers
			pe.th32ProcessID, // Process ID
			pe.th32ParentProcessID, // Parent Process ID
			pe.cntThreads, // Number of Threads
			pe.szExeFile); // Executable name
		
	} while (Process32Next(hSnapshot, &pe));

	CloseHandle(hSnapshot);
	return 0;
}
