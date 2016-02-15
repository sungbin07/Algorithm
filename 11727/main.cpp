//
//  main.cpp
//  11727
//
//  Created by 윤성빈 on 2016. 2. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 2 x N 타일링2

/*
 처리과정
 dp[n] : n번째 직사각형을 채우는 방법
 dp[n] = dp[n-1] +2dp[n-2]
 */

#include <cstdio>
#define MAX 1001

int dp[MAX];
int calc(int n){
    
    if( n == 0 || n == 1) return 1;
    
    if(dp[n] >0) return dp[n];
    
    dp[n] = calc(n-1) + 2 * calc(n-2);
    dp[n] %= 10007;
    
    return dp[n];
}

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    
    printf("%d",calc(n));

    return 0;
}
