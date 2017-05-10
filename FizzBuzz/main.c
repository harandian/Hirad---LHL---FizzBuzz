//
//  main.c
//  FizzBuzz
//
//  Created by Hirad on 2017-05-09.
//  Copyright © 2017 Hirad. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    
    
    for (i = 1; i < 101; i++) {
        
        if ( i % 3 == 0 && i % 5 != 0){
            
            printf("Fizz\n");
        }
        if (i % 5 == 0 && i % 3 != 0) {
            
            printf("Buzz\n");
        }
        if (i % 5 == 0 && i % 3 == 0) {
           
            printf("FizzBuzz\n");
        }
        if ( i % 5 != 0 && i % 3 != 0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}
