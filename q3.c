/* Given a positive integer value n (>= 0) display number, square and cube of 
numbers from 1 to n in a tabular format?*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number: ");
if (scanf("%d", &n) !=1)
return 0;
printf("Num\tSquare\tCube\n");
for (int i = 1; i<= n; ++i) {
    long long s = (long long)i * i;
    long long c = s * i;
    printf("%d\t%lld\t%lld\n", i, s, c);
}

}