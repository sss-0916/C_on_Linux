#include <stdio.h>
#include <unistd.h>

#define RED "\033[31m"
#define BLUE "\033[34m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

int main(){
    int i = 0;
    char* color[] = {
        RED, BLUE, GREEN, YELLOW
    };
    const char* lable = "|/-\\";
    char bar[102] = {0};
    while(i <= 100){
        printf("%s", color[i % 3]);
        printf("[%-100s][%d%%][%c]\r", bar, i, lable[i % 4]);
        fflush(stdout);
        bar[i++] = '#';
        sleep(1);
    }
    printf("\n");
}
