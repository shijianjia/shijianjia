#include "stdio.h"
#include "calc.h"

int main()
{
    int a=3,b=6;
    printf("%d + %d = %d\n",a,b,add(a,b));
    printf("%d + %d = %d\n",a,b,sub(a,b));
    printf("%d + %d = %d\n",a,b,mult(a,b));
    printf("%d + %d = %f\n",a,b,div(a,b));
    return 0;
}