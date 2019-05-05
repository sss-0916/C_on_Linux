#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

int tickets = 10;

void* thr_start(void* arg){
	while(1){
		if(tickets > 0){
			usleep(1);
			printf("ticket scalper %d get a ticket[%d]!\n", (int)arg + 1, tickets);
			--tickets;
		}
		else{
			pthread_exit(NULL);
		}
	}
	return NULL;
}

int main(){
	pthread_t tid[4];
	int i = 0, ret;

	for(; i < 4; ++i){
		ret = pthread_create(&tid[i], NULL, thr_start, (void*)i);
		if(ret != 0){
			printf("pthread create error!\n");
			exit(-1);
		}
	}

	for(i = 0; i < 4; ++i){
		pthread_join(tid[i], NULL);
	}

	return 0;
}
