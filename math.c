#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10,y=4;
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d / %d = %f\n",x,y,(float)x/(float)y);
    printf("%d %% %d = %d\n",x,y,x%y);
    return 0;
}
