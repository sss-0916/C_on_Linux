#include <stdio.h>

int main()
{
    char killer = 0;

    for(killer = 'a'; killer <= 'd'; ++killer)
    {
        if ((killer != 'a') + (killer == 'c') +
            (killer == 'd') + (killer != 'd') 
            == 3)
        {
            printf("killer is %c!\n", killer);
        }
    }

    return 0;
}
