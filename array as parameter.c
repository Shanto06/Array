

#include<stdio.h>
void abc(int arr[])
{


    printf("Before change in abc function arr[3]=%d\n",arr[3]);

    arr[3]=100;
    printf("After change in abc function arr[3]=%d\n",arr[3]);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    printf("Before change in main function arr[3]=%d\n",arr[3]);

    abc(arr);

    printf("After change in main function arr[3]=%d\n",arr[3]);
    //abc(arr);
    return 0;
}

/*
///using two dimesonal

#include<stdio.h>
void abc(int arr[][10])
{


    printf("Before change in abc function arr[4][2]=%d\n",arr[4][2]);

    arr[4][2]=100;
    printf("After change in abc function arr[4][2]=%d\n",arr[4][2]);
}

int main()
{
    int arr[5][10];
    arr[4][2]=4;
    printf("Before change in main function arr[4][2]=%d\n",arr[4][2]);

    abc(arr);

    printf("After change in main function arr[4][2]=%d\n",arr[4][2]);
    //abc(arr);
    return 0;
}
*/


