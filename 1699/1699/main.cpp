//
//  main.cpp
//  1699
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 제곱수의 합
/*
 처리과정
 dp[n] : n을 제곱수의 합으로 표현한 최소 갯수
 dp[n] = dp[n-i*i] +1 의 최소값(0 <= i <= n)
 */

#include <cstdio>
#define min(a,b) a<b? a:b
int dp[100001];
int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        dp[i] = i;
        for(int j = 1; j*j <= i; j++){
            dp[i] = min(dp[i],dp[i-j*j] + 1);
        }
    }
    printf("%d",dp[n]);
    
    return 0;
}
