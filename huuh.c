#include <stdio.h>

int main() {
    int i, x, total = 0;

    scanf("%d", &i);

    // calculate the sum of digits of i
    x = (i % 10) + (i / 10);
    printf("%d\n",x);

    // collect water for 7 days
    for (int day = 1; day <= 7; day++) {
        total += i;  // add the water collected on this day to the total
        i += x;      // increase the amount of water collected for the next day
    }

    printf("%d\n", total);

    return 0;
}

