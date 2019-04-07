#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(){
    umask(0);
    int fd = open("./tmp.txt", 
        O_RDWR | O_CREAT | O_APPEND, 0777);
    if(fd < 0){
        perror("open error");
        return -1;
    }
    char buf[1024] = "hehe";
    int ret = write(fd, buf, strlen(buf));
    if(ret < 0){
        perror("write error");
        return -1;
    }
    lseek(fd, 0, SEEK_SET);
    memset(buf, 0x00, 1024);
    printf("%s\n", buf);
    ret = read(fd, buf, 1023);
    printf("%s\n", buf);
    close(fd);
    return 0;
}
