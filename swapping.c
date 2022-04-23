#include <stdio.h>

int main()
{
    int x=20,y=10;
    x = x+y;
    //x becomes 20+10=30. x=30
    y = x-y; 
    //y becomes 30-10=20. y=20
    x = x-y; 
    //x becomes 30-20=10. x=10
    printf("After swapping x= %d , y= %d",x,y);
    return 0;
}
