#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float sumX;
    int n,k;
    sumX=0.0;
    printf("entre la valeur n\n");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
       sumX=(sumX+k)/(k+n);
    }
    printf("sumX= %f",sumX);

    return sumX;
}
