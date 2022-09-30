#include <stdio.h>
#include <math.h>
 
int main(void)
{
    float a, b;
    printf("a:");
    scanf ("b", &a);
 
    printf(":");
    scanf ("", &b);
 
    printf("top",abs(a)+abs(b));
    printf("cep",abs(a)-abs(b));
    printf("pep",abs(a)*abs(b));
    printf("xep",abs(a)/abs(b));
 
    return 0;
}
