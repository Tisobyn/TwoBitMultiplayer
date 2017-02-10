//
//  main.c
//  TwoBitMultiplayer
//
//  Created by Yermek Sabyrzhan on 11.02.17.
//  Copyright © 2017 Yermek Sabyrzhan. All rights reserved.
//

#include <stdio.h>

int multiplayer(int a, int b){
    int mlp;
    while(b){
        
        int lsb = b&1;
        if (lsb){
            mlp += a;
        }
        a = a << 1;
        b = b >> 1;
    }
    return mlp;
}


int main() {
    int a, b, mlp;
    printf("Insert first bit: ");
    scanf("%d", &a);
    printf("Insert second bit: ");
    scanf("%d", &b);
    
    mlp = multiplayer(a, b);
    
    printf("You multipayer is: %d\n", mlp);
    return 0;
}
