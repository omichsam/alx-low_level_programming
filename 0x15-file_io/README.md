# 0x15. C - File I/O


In Unix and Unix-like computer operating systems, a **file descriptor** (FD, less frequently fildes) 
is a process-unique identifier (handle) for a file or other input/output resource, such as a pipe 
or network socket.

File descriptors typically have non-negative integer values, 
with negative values being reserved to indicate "no value" 
or error conditions.

File descriptors are a part of the POSIX API.
 Each Unix process (except perhaps daemons) should have three standard 
 POSIX file descriptors, corresponding to the three standard streams:

Integer value	         Name	        <unistd.h> symbolic constant[1]	              <stdio.h> file stream[2]
    0	          Standard input	    STDIN_FILENO	                              stdin
    1	          Standard output	    STDOUT_FILENO	                              stdout
    2	          Standard error	    STDERR_FILENO	                              stderr


##TASKS
-0. ssize_t read_textfile(const char *filename, size_t letters)
    -Write a function that reads a text file and prints it to
     the POSIX standard output.

-1. int create_file(const char *filename, char *text_content)
    -Create a function that creates a file.
    -where filename is the name of the file to create and text_content is a 
     NULL terminated string to write to the file

-2. Write a function that appends text at the end of a file.
    -Prototype: int append_text_to_file(const char *filename, char *text_content);

-3. Write a program that copies the content of a file to another file.
-4.  Write a program that displays the information contained in the ELF
     header at the start of an ELF file.  
