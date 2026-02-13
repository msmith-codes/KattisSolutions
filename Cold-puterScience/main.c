#include <stdio.h>

int main()
{
    int c = 0;
    int n = 0;

    // Read in the number of characters.
    scanf("%d", &n);

    // Count the numbers below 0.
    for(int i = 0; i < n; ++i) {
        int temp = 0;
        scanf("%d", &temp);

        if(temp < 0) {
            c++;
        }
    }

    // Output the result.
    printf("%d", c);
    return 0;
}