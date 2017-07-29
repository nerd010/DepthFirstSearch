//
//  main.c
//  DepthFirstSearch_全排列
//
//  Created by Charles Wang on 16/3/25.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>

int a[10], book[10], total = 0;

void dfs (int step);

int main(void)
{
    dfs(1);
    printf("total = %d\n", total/2);
    getchar();getchar();
    
    return 0;
}

void dfs (int step)
{
    int i;
    if (step == 10)
    {
        if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
        {
            total++;
            printf("%d%d%d + %d%d%d = %d%d%d\n", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
        }
        
        return;
    }
    
    for (i = 1; i <= 9; i++)
    {
        if (book[i] == 0)
        {
            a[step] = i;
            book[i] = 1;
            
            dfs(step + 1);
            book[i] = 0;
        }
    }
    
    return;
}