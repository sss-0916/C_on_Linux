#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[], char* env[]){
    execle("./env", "env", "-a", NULL, env);
    return 0;
}
