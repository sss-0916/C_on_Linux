#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/shm.h>

#define IPC_KEY 0x123
#define SHM_SIZE 4096

int main(){
    int shmid = shmget(IPC_KEY, SHM_SIZE, IPC_CREAT | 0666);
    if(shmid < 0){
        perror("shmget error");
        exit(1);
    }
    char* shm_start = (char*)shmat(shmid, NULL, 0);
    if(shm_start == (void*)-1){
        perror("shmat error");
        exit(1);
    }
    int i = 1;
    while(1){
        sprintf(shm_start, "[明天就可以上课了, 好开心~~+%d]\n", i++);
        sleep(1);
    }
    shmdt(shm_start);
    shmctl(shmid, IPC_KEY, NULL);
    return 0;
}
