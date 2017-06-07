//
//  main.c
//  test0607c
//
//  Created by 20161104609 on 17/6/7.
//  Copyright © 2017年 20161104609. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a=100,i,sum;
    sum=0;
    for(i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    
    return 0;
}
