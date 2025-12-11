//Sort 3 input numbers (non-decreasing order).
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 3 number\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {int x = a; a = b; b = x; }
    if (a > c) {int x = a; a = c; c = x; }
    if (b > c) {int x = b; b = c; c = x;}
printf("%d %d %d\n", a, b, c);
return 0;
}