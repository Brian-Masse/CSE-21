#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

double f( double x ) {
    return log( x ) + ( x * x);
}

double search( int n, double error ) {

    double lo = 0;
    double hi = n;
    double v = (hi + lo) / 2;

    printf("diff: %f, error: %f\n", hi - lo, (2* error));
    printf( "lo: %f, hi: %f, v: %f\n", lo, hi, v );


    while ( hi - lo > (2 * error) ) {

        if (f(v) == 0) {
            return v;
        }
        else if ( f(v) < 0 ) {
            lo = v;
        }
        else if (f(v) > 0) {
            hi = v;
        }

        v = (hi + lo) / 2;

        printf( "lo: %f, hi: %f, v: %f\n", lo, hi, v );

    }

    return v;

}

int main() {

    
    printf( "hello world: %f\n", search(2, 0.03125) );


}