#include <stdio.h>

#define abc 5
#define add(a,b) a + b

int main()
{
    int x = 2;
    int y = abc;
    int z = x+y;

    int addMacroResult = add(x,y);
    printf("%d\n", z);
    printf("%d\n", addMacroResult);
    return 0;
}