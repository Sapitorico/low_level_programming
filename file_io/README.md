<div><h1>File IO (Input/Output)</h1>
Is a fundamental part of C programming. Programs often need to read and save data to files, and the standard C input/output library provides the tools to do this. This tool allows the programmer to work with text or binary files in the C programming language, allow opening, reading, writing and closing files, as well as performing other file management tasks. 
</div>

This tool also offers several directives for file control, such as security directives, storage directives and access directives. These policies allow the programmer to control access to files, as well as permissions and the types of data contained in the files.

The standard C input/output library consists of several functions. For example, the fopen () function opens a file for reading or writing, while the fread () function reads data from an open file and the fwrite () function writes data to a file. Other file management functions include fclose (), which closes an open file, and fseek (), which moves the read/write pointer in a file. 

Some of these functions also allow you to manipulate the contents of a file, such as the fgetc () function, which reads one character at a time from an open file, and the fputc () function, which writes one character at a time to an open file. 

<h3>Open()</h3>
Is an input/output (I/O) function in C that allows a programmer to open a file for reading, writing, or updating. This function is part of the standard C file system (stdio.h). The open() function takes the necessary parameters to open a file. These parameters include the file name, the access mode (read, write or update) and the permissions for the file. If open() returns a non-zero (0) value, it means that the file has been successfully opened. If it returns a value equal to zero (0), it means that there is an error opening the file. The programmer must check the return value of open() to verify that the file was opened correctly.

<h3>Write</h3> 
File IO in C is a function that allows the programmer to write data to a file. This function is used to create or overwrite a file with the new data. This function is used to save the data to the computer disk. This function takes as arguments the name of the file, the mode in which the file will be opened and the data to be written to the file. The mode in which the file will be opened can be for read, write, read/write, etc. The function returns the number of bytes written to the file if the operation is successful.

## What are open() and write()?

**open()** is a C function that opens a file and returns a file descriptor. The file descriptor is an identifier of an open file. This identifier can be used to read and write to the file. 

**write()** is a function that allows programmers to write a sequence of bytes to a specific file. This function takes the file descriptor returned by open() and writes bytes to the file.

## Using open()

open() takes a string as a parameter. This string is the name of the file being opened. The function takes a second parameter, which is an integer that specifies the access mode to the file. These modes can include "read", "write", "read/write", etc. 

open() returns a file descriptor that can be used to read and/or write to the file. If the function returns -1, it means that the file could not be opened. 

## Use of write()

write() takes as parameters the file descriptor, a pointer to a byte array, the number of bytes to write, and a pointer to an integer. The pointer to the byte array is the contents to be written to the file. The integer is the number of bytes to write to the file. 

write() returns an integer that is the number of bytes actually written to the file. If this integer is equal to the integer passed to the function, it means that the write was successful. If the integer returned is less than the integer passed to the function, it means that the write was not successful. 

## Example

The following is an example of how to use open() and write() to open and write a file. 

```c
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int fd;
    char *buffer = "This is an example of writing files in C";

     We open the file in write mode
    fd = open("myfile.txt", O_WRONLY);

     Verify that the file has been opened correctly
    if (fd == -1) {
        printf("Could not open file");
        return 1;
    }
     We write to the file
    write(fd, buffer, strlen(buffer));

     Close the file
    close(fd);

    return 0;
}
```

In this example, we use open() to open the file "myfile.txt" in write mode. Then we use write() to write a string to the file. Finally, we use close() to close the file.
