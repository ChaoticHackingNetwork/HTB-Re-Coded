# HTB-Re-Coded
HacktheBox Re-Coded - Codeups

Intro
Welcome to the beginning of the track for HacktheBox Re-Coded; our goal for the series is to become a better programmer in the terms of Ethical Hacking. What do I mean by that? Well, we won't be creating a new Social Media Platform, instead we will be coding tools to penetrate systems and networks. We will code our way through the Hackthebox network, no nmap/metasploit or whatever else your familiar with just the tools we create! Don't consider the series and tools as reinventing the wheel but rather gaining a better understanding of the tools we use daily. To be a true hacker, you need to know how to code.

Hackthebox helps us prepare on entering a career as an Ethical Hacker/Penetration tester and many other professions by allowing us to perform these nefarious activities on their platform, but what exactly is a Penetration test?

A Penetration test or "Pentest" is an Authorized attack on a computer system! Why would someone allow this? This is actually a proactive way to IT Security; if we can breach our own networks/systems like a Black Hat, those areas can be strengthened and remediated. This is not a one stop solution, Cybersecurity has many revolving doors and this is just one of them.

The series will follow the crawl-walk-run method, so we will start slow and progress our coding technique to give context to certain areas such as Threading/Multiprocessing or advanced networking concepts. One of our main objectives is network programming and its aspects so we will break down protocols to their basic building blocks.

Coding can be intimidating at first, even more so when you have no idea where to start when it comes to creating hacking tools! I plan to go in detail so the code will be heavily commented to show exactly what each part is doing. Try not to copy and paste as that is not doing you any good. Code the tools with me and add your own tweak to them! We will only be using the terminal so no time will be wasted creating GUI's.

We will be primarily using Python but we won't shy away from any other language throughout the series. Python is so versatile, but I also want to add in C++ periodically as Bonus Code snippets to show variations in languages. Straight from the horse's mouth...

"Python is an interpreted high-level general-purpose programming language. Its design philosophy emphasizes code readability allowing programmers to write clear, logical code".
Lets take some time to think about some of the tools we will need, I'm positive by the end we will have completed much more than whats on this brief list...
Port Scanners
-> As an Ethical Hacker; port scanning is something you should become familiar with, we are going to be doing reconnaissance to fingerprint the target to find ports/services and other useful info.

Recon Gadgets
-> Recon gadgets will consist of quick tools/scripts to help automate the process of information gathering i.e. if FTP/SMB have anonymous access allowed.

NetBear TCP/UDP Network Utility
-> Our Netcat lookalike NetBear (See what I did there) will be our own version to read/write to and from TCP/UDP sockets. Who doesn't love Bear's!!!

Web Server Directory Mapping
-> When dealing with Web apps we want to know hidden details so we will attempt to map the service.

Web Proxy
-> Moreso we need a way to intercept web traffic for analysis and fuzzing data; our Web Proxy will take care of that!

Online/Offline Username/Password Bruters
-> A way to automate username/password spraying. Offline cracking on local machine and Online web portal attacks.

Debuggers & DLL Injection
-> A few machines will give us the oppurtunity to debug applications allowing us manipulate all sorts of different things including DLL Injection.

Windows/Linux Priviledge Escalation
-> Once we gain initial access, we want different tools/scripts to help automate or at least help point us in the right direction for escalating priviledges. Scripts like WinEnum/LinEnum.

Python can work as long as you have it installed and have the needed modules, mostly everything we will use will be in the standard library but we will be downloading others for things like color. I will be working from the Linux side of the house, but you can still follow along within Windows/Mac.. Lastly, the new HTB platform changes IP's so some screenshots will show a different IP as I did not complete the codeup in one sitting. Enough of the boring stuff, Lets CODE...

