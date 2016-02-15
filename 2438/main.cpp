//
//  main.cpp
//  2438
//
//  Created by 윤성빈 on 2016. 2. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 별찍기

#include <cstdio>

int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    
    for (int i = 0; i < n ; i ++){
        for(int j = 0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
