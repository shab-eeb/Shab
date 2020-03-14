#include <stdio.h>
int main() 
{
    int low, high, i, n;
    printf("Enter two intervals: ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
    while (low < high)
    {
        n = 0;
        for (i = 2; i <= low / 2; ++i)
        {
            if (low % i == 0)
            {
                n = 1;
                break;
            }
            
        }
        if (n == 0)
        printf("%d ", low);
        ++low;
    }
}
    
