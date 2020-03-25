#include<stdio.h>

double find_aiv(int arr[],int n)
{
    int sum=0,i;
    double aiv;
    for(i=0;i<6;i++)
    {
        sum=sum+arr[i];
    }
    aiv=(double)sum/n;
    return aiv;
}

int main()
{
    int arr[]={19,100,-199,34,534,85};
    int x=6;
   double aiv;
    aiv=find_aiv(arr,x);
    printf("%lf\n",aiv);
    return 0;

}

