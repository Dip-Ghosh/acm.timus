/*
*****
*****
*****
*****
*****
*/
#include<stdio.h>
int main()
{

    int i=1,j=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

