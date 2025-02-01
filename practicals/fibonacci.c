#include <stdio.h>
// program name
int main()
{
    int n;
    int a = 0, b = 1,c=0;
    printf("Enter length of fibonacci series: ");
    scanf("%d",&n);
    printf("Printing fibonacci series:\n%d\n%d",a,b);
    for (int i = 0; i < n - 2; i++)
    {
        c = a + b;
        printf("\n%d",c);
        a = b;
        b = c;
    }
    return 0;
}
