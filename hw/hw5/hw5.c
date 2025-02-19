#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int squared( int x ) {
    if (x == 0 ) {
        return 0;
    }

    int isEven = (x & 1);

    return squared( x - 1 ) + 2*x - 1;

    // if (!isEven) {
    //     return 4 * squared( x / 2 );
    // } else {
        
    // }
}


int main() {

    for (int i = 0; i < 100; i++) {
        printf( "%d squared: %d\n", i, squared(i) );
    }
}