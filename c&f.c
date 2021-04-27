#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=128;
    double f;
    f=c*9;
    f=f/5+32;
    printf("攝氏%d度 = ",c);
    printf("華氏%f度",f);
    return 0;
}
