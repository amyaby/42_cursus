#include <stdio.h>
#include <fcntl.h>//open
#include <unistd.h>  // read() and close()
#include <string.h>  // strlen()
#define BUFFER_SIZE 40 //1kb <-> 1024
int main()
{
    int fd;
    //open a file
    fd =  open("text.txt", O_CREAT | O_WRONLY | O_RDONLY);//DEJA MAKAYNCH 3NDNA yalah sawbnah
    char *txt = "halawah zdi lawah";
    //write to the file
    ssize_t written_bytes = write(fd,txt,strlen(txt));
    //number of bytes read
    printf("Successfully written %zd bytes to the file.\n", written_bytes);
    close(fd);//close the fd after writhing
    fd = open("text.txt",O_RDONLY);//deja 3ndna file (reopen)
    char buff[BUFFER_SIZE];
    //read data from fd
    int bytes_read;
    bytes_read = read(fd,buff,BUFFER_SIZE);
    printf("Read %d bytes from the file: %s", bytes_read, buff);
          close(fd);//close a file
    return 0; // Success
}