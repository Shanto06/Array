#include <stdio.h>

int main()
{
    int maths[5]={57,77,88,56,36};
    int roll;
    for(roll=1;roll<=5;roll++){
        printf("roll:%d marks:%d\n",roll,maths[roll-1]);
    }
    return 0;
}
