#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main(){
    while(1){
        printf("hello, world!\n");
        sleep(1);
    }
    return 0;
}
