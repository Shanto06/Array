#include<stdio.h>
int main()
{
    int i,j,k,m,n,p,q,sum,A[10][10],B[10][10],C[10][10];
    printf("Enter the row=m and column=n:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the first Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("Enter the row=p and column=q:\n");
    scanf("%d%d",&p,&q);
    printf("Enter the second Matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    if(n==p)
    {


    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<p;k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }

    }
    else
       {
            printf("the dimension is not valid");

       }
    printf("The product Matrix:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
