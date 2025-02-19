#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int runs = 0;
int initialRuns = 0;

int squared( int x ) {
    runs += 1;

    if (x == 0 ) { return 0; }

    int isEven = (x & 1);

    // return squared( x - 1 ) + 2*x - 1;

    if (!isEven) {
        return 4 * squared( x / 2 );
    } else {
        return squared( x - 1 ) + 2*x - 1;   
        // return 4 * squared( (x - 1) /2 ) + 2*x - 1;
    }
}


int main() {

    for (int i = 0; i < 100; i++) {
        initialRuns = runs;
        printf( "%d squared: %d, runs: %d\n", i, squared(i), runs - initialRuns );
    }

    printf("runs: %d\n", runs);
}