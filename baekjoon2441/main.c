//
//  main.c
//  baekjoon2441
//
//  Created by 이승섭 on 2018. 12. 13..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int N, i, j;
    
    scanf("%d", &N);
    
    if(N >= 1 && N <= 100)
    {
        for(i = N; i > 0; i--)
        {
            for(j = 0; j < N-i; j++)
            {
                printf(" ");
            }
            for(j = i; j > 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
