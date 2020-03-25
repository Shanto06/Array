#include <stdio.h>

int main()
{
    int ar[]={10,20,30,40,50,60,70,80,90,100};
    int ar2[10];
    int i,j;
    for(i=0,j=9;i<10;i++,j--){
        ar2[j]=ar[i];
    }
    for(i=0;i<10;i++){
        ar[i]=ar2[i];
    }
    for(i=0;i<10;i++){
        printf("%d\n",ar[i]);
    }
    return 0;
}
