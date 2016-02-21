//
//  main.cpp
//  1676
//
//  Created by 윤성빈 on 2016. 2. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 팩토리얼 0의 개수

#include <cstdio>

int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    int cnt =0;
    for(int i = 5; i<=n;i*=5){
        cnt+=(n/i);
    }
    printf("%d",cnt);
    return 0;
}
