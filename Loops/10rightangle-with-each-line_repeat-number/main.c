#include <stdio.h>

 int main()
{
    int i,j,rows;
    printf("Enter the no of row: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("% d",i);
        }
       }
    printf("\n");
    return 0;
}
