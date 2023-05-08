# 0x15. C - File IO

A file descriptor is a number that uniquely identifies an open file in a computer's operating system.
 It describes a data resource, and how that resource may be accessed.

 When a program asks to open a file — or another data resource, like a network socket — the kernel:
        - Grants access.
        - Creates an entry in the global file table.
        - Provides the software with the location of that entry.
    


 ##   Name	     File descriptor    Abbreviation	    Description	
 Standard input	        0	          stdin             The default data stream for input, for example in a command pipeline. 
                                                        In the terminal, this defaults to keyboard input from the user.	

Standard output 	    1	         stdout             The default data stream for output, for example when a command prints text. 
                                                        In the terminal, this defaults to the user's screen.	

Standard error	        2	         stderr             The default data stream for output that relates to an error occurring. 
                                                        In the terminal, this defaults to the user's screen.	

File descriptors may be directly accessed using bash, the default shell of Linux, macOS X, and Windows Subsystem for Linux.

