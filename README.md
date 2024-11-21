# get_next_line.c

**Introduction**

Get Next Line (GNL) is a project to implement a function that reads a single line from a file descriptor. This task introduces the concept of static variables in C, making it a valuable exercise for understanding memory persistence between function calls. Once complete, this utility can be added to your library of tools for handling file inputs efficiently.

**Features**

Mandatory Functionality
The core function, get_next_line(), has the following prototype:

**char *get_next_line(int fd);**

It must:

Return a line read from the file descriptor (fd), including the terminating \n (if present).
Return NULL when:
The end of the file is reached.
An error occurs.
Allow multiple calls (e.g., in a loop) to read a file line by line.
Handle both regular files and standard input.
Work with dynamic buffer sizes (BUFFER_SIZE), specified during compilation.
Implementation Details
Header File: Include the function prototype in get_next_line.h.
Helper Functions: Define them in get_next_line_utils.c.
Memory Management:
Use only heap-allocated memory.
Free all allocated memory to prevent leaks.

**Compilation:**

Must support the -D BUFFER_SIZE=n flag for dynamic buffer sizing.
Ensure the function works with small, large, and edge-case buffer sizes (e.g., 1, 9999, 10000000).

**Undefined Behavior:**

Occurs if the file descriptor changes after an unfinished read.
Not required to handle binary files explicitly, but logical handling is encouraged.

**Prohibited Elements:**

Global variables.
lseek() function.
Using libft.

**Bonus Features**

If all mandatory requirements are perfectly met, implement the following:

**Single Static Variable:**

Use only one static variable within get_next_line().

**Multiple File Descriptors:**

Support simultaneous reads from multiple file descriptors without losing the state of each descriptor.

**For bonus functionality, include these additional files:**

get_next_line_bonus.c
get_next_line_bonus.h
get_next_line_utils_bonus.c


