#include<stdio.h>

int main()
{
    int a,b,c;
    double maths[5]={85.6,49.7,78,96,70};
    int roll;
    for(roll=1;roll<=5;roll++){
        printf("roll:%d marks:%.2lf\n",roll,maths[roll-1]);
    }
    return 0;
}
