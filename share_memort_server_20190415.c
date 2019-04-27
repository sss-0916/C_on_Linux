#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
    while(1){
        printf("%s", shm_start);
        sleep(1);
    }
    shmdt(shm_start);
    shmctl(shmid, IPC_RMID, NULL);
    return 0;
}
