#include <stdio.h>

int main()
{
    double maths[5]={57.66,77,88.44,56.38,36};
    int roll;
    for(roll=1;roll<=5;roll++){
        printf("roll:%d marks:%lf\n",roll,maths[roll-1]);
    }
    return 0;
}

