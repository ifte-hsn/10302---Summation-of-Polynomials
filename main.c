#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    long long int sum, n;

    while(scanf("%lld", &n) == 1) {
        sum = (n*(n+1)/2)*(n*(n+1)/2);

        printf("%llu\n",sum);
    }
    return 0;
}
