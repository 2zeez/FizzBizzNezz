//
//  main.c
//  FizzBuzzNezz
//
//  Created by Aziz Raouf on 2015-07-23.
//  Copyright (c) 2015 Aziz Raouf. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    int x, y, z;
    printf("Enter first integer multiple to replace with Fizz: ");
    scanf("%d", &x);
    printf("\nEnter second integer multiple to replace with Bizz: ");
    scanf("%d", &y);
    printf("\nEnter integer to count till: ");
    scanf("%d", &z);
    
    int i = 1;
    while(i<=z)
    {
        if (i%x==0 && i%y==0)
            printf("FizzBizz\n");
        else if (i%x==0)
            printf("Fizz\n");
        else if (i%y==0)
            printf("Bizz\n");
        else
            printf("%d\n", i);
        i++;
    }
    return 0;
}
