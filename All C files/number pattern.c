#include<stdio.h>
int main()
{

    int i,j,k,n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=n;j>=1;j--)
        {

            printf(" ");


        }
        for(k=i;k>=1;k--)
        {

            printf("%d",k);

        }
        printf("\n");
    }

}
