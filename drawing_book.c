#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int p; 
    scanf("%d",&p);
    // your code goes here
    if(p <= n / 2)
    {
        printf("%d\n", p / 2);
    }
    else
        {
        printf("%d\n", ((n / 2) - (p / 2)));
    }
    return 0;
}
