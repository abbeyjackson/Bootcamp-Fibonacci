//
//  main.c
//  Fibonacci
//
//  Created by Abegael Jackson on 2015-05-06.
//  Copyright (c) 2015 Abegael Jackson. All rights reserved.
//

#include <stdio.h>


int Fibonacci1();
int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber);
    
int n = 4; // n is the nth digit in the series.


int main(int argc, const char * argv[]) {

    
    /* Alternate for loop:
    for (int i = 0; i <= n - 1; i++) { //
        printf("%d, ", Fibonacci(i));
    }
    (n-1) is used because otherwise the series is printing (n+1) digits. However, this means that in Fibonacci() m is not the number of digits, it is the number of digits minus 1 (as it receiving "i" is starting at 0, there is no such thing as the 0th digit. If you want the code to be straight forward, m in Fibonacci() should be equal to the number of digits. In that case, the other loop is preferred.
    */
    
    int j = 0;

    for (int i = 1; i <= n; i++) {
        printf("%d, ", Fibonacci1(j));
        ++j;
    }

    
    return 0;
}


// Version 1: using iteration


int Fibonacci1(int m) { // this function sets the values for the nth (m) number, the previous number (m-1) and the number previous to the previous number (m-2).
    
    int x = 0;
    int y = 1;
    int nthNum = 0;
    
    if (m == 0) {
        return nthNum = m;
    }
    
    if (m == 1) {
        return nthNum = m;
    }
    
    for (int j = 2; j <= m; j++) { // if n is 1 or 0 values are returned above so i should never be 1 or 2, it should always start at 2 otherwise we will get duplicates
        nthNum = x + y;
        x = y;
        y = nthNum;
        
    }
    return nthNum;
}




