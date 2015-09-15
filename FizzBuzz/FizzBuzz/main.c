//
//  main.c
//  FizzBuzz
//
//  Created by James Rowe on 2015-09-15.
//  Copyright (c) 2015 James Rowe. All rights reserved.
//


#include <stdio.h>

int main()

{
    int x = 1;
    while (x < 101)
        
    {
        
        if ((x%3 == 0) && (x%5 == 0))
            
        {
            printf("fizzbuzz\n");
            
        }
        
        else if (x%3 == 0)
            
        {
            printf("fizz\n");
            
        }
        
        else if (x%5 == 0)
            
        {
            printf("buzz\n");
            
        }
        
        else
            
        {
            printf("%d\n", x);
            
        }
        
        x++;
    }
    return (0);
    
}

