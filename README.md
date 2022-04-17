# HTB-Re-Coded
***HacktheBox Re-Coded - Codeups***

**Intro**

Welcome to the beginning of the track for HacktheBox Re-Coded; our goal for the series is to become a better programmer in the terms of Ethical Hacking. What do I mean by that? Well, we won't be creating a new Social Media Platform, instead we will be coding tools to penetrate systems/networks. We will code our way through the Hackthebox machine list, no nmap/metasploit or whatever else your familiar with just the tools we create! Please do not consider the series/tools as reinventing the wheel but rather gaining a better understanding of the mindset of a hacker and the tools we as Ethical Hackers use daily. To truly be a Hacker, you need to know how to code.

Hackthebox helps us prepare on entering a career as an Ethical Hacker/Penetration tester and many other professions by allowing us to perform these nefarious activities on their platform, but what exactly is a Penetration test?

A Penetration test or "Pentest" is an Authorized attack on a computer system! Why would someone allow this? Well, this could be seen as a proactive way to secure your company or "big data"; if we can breach our own networks/systems like a Black Hat, those areas can be strengthened and remediated. This is not a one stop solution, Cybersecurity has many revolving doors and this is just one of them. We will explore many concepts and tricks of the trade throughout the series. 

We will follow the crawl-walk-run method, so we shall start slow and progress our coding technique to give context to certain areas such as network programming and its aspects; we will break down protocols to their basic building blocks and dominate the network!

Coding can be intimidating at first, even more so when you have no idea where to start when it comes down to creating tools to help you go on the offensive! I plan to go in detail so the code will be heavily commented (Geared towards beginner/junior devs) to show exactly what each part is doing. Try not to copy and paste as that is not doing you any good. Code the tools with me and add your own tweak to them! We will only be using the terminal so no time will be wasted creating GUI's.

We will be primarily using Python but we won't shy away from any other language throughout. I will add bonus CPP snippets for tools to showcase differences in languages, speed and compiled vs interpreted coding.

Lets take some time to think about some of the tools we will need, I'm positive by the end we will have completed much more than whats on this brief list.

```
[Port Scanners]
-> As an Ethical Hacker; port scanning is something you should become familiar with, we are going to be doing reconnaissance to fingerprint the target to find ports/services and other useful info.

[Recon Gadgets]
-> Recon gadgets will consist of quick tools/scripts to help automate the process of information gathering i.e. if FTP/SMB have anonymous access allowed.

[NetBear TCP/UDP Network Utility]
-> Our Netcat lookalike NetBear (See what I did there) will be our own version to read/write to and from TCP/UDP sockets. Who doesn't love Bear's!!!

[Web Server Directory Mapping]
-> When dealing with Web apps we want to know hidden details so we will attempt to map the service.

[Web Proxy]
-> Moreso we need a way to intercept web traffic for analysis and fuzzing data; our Web Proxy will take care of that!

[Online/Offline Username/Password Bruters]
-> A way to automate username/password spraying. Offline cracking on local machine and Online web portal attacks.

[Debuggers & DLL Injection]
-> A few machines will give us the oppurtunity to debug applications allowing us manipulate all sorts of different things including DLL Injection.

[Windows/Linux Priviledge Escalation]
-> Once we gain initial access, we want different tools/scripts to help automate or at least help point us in the right direction for escalating priviledges. Scripts like WinEnum/LinEnum.
```

Enough of the boring stuff, Lets Code...
