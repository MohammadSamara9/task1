#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("please inter the value of x and y\n");
    scanf("%d%d", &x,&y);

if(x>y)
{
    printf("x is larger ");
}
else if (y>x)
{
   printf("y is bigger ");
}
else
{
    printf("x equal y");
}

    return 0;
}
