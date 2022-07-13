// HackTheBox Re-Coded
// A very basic C++ Linux Port Scanner
///////////////////////////////////////

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

void printUsage() {

    std::cout << "Usage: ./portScanner targetIP startPort endPort \n\n";
}

int main ( int argc, char **argv){
    if ( argc != 4)
    {
        printUsage();
        return -1;
    }

    char* targetIP = argv[1];
    int startPort = atoi(argv[2]);
    int endPort = atoi(argv[3]);
    struct sockaddr_in addr;
    struct sockaddr_in target_addr;
    int sock = 0;

    memset(&target_addr, '0', sizeof(target_addr));

    target_addr.sin_family = AF_INET;

    if (inet_pton(AF_INET, targetIP, &target_addr.sin_addr) <= 0)
    {
        std::cout << "Error converting IP! \n\n";
        return -1;
    }

    for (int i = startPort; i < endPort; i++)
    {
        target_addr.sin_port = htons(i);
        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        {
            std::cout << "Error creating socket! ";
            std::cout << std::strerror(errno) << std::endl;
            return -1;
        }

        if (connect(sock, (struct sockaddr*)&target_addr, sizeof(target_addr)) < 0)
        {
           continue;
        }else{
            std::cout << "Port " << i << " : open  \n\n";
        }
        close(sock);

    }
    return 0;


}
