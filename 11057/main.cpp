//
//  main.cpp
//  11057
//
//  Created by 윤성빈 on 2016. 2. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 오르막 수

/*
 처리과정
 dp[n][l] : n번째 숫자가 l인 오르막의 수
 dp[n][l] += dp[n-1][k] ( 0 <= k <= l)
 
 Bottom up 
 dp[0][0] = 1 의 의미는 아무것도 경우의 수 하나라고 친다. 그래야 다음 계단이 하나 있을때 경우의가 10이 나오게 된다.
 */

#include <cstdio>
#define MAX 1001

long long dp[MAX][10] = {1};
long long mod = 10007;

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    
    for(int i =1;i<=n;i++){
        for(int j = 0 ; j < 10; j++){
            for(int k = 0 ; k <=j;k++){
                dp[i][j] += dp[i-1][k];
                dp[i][j] %= mod;
            }
        }
    }
    
    long long total = 0;
    
    for(int i = 0 ; i < 10 ; i++)
        total += dp[n][i];
    total %= mod;
    printf("%lld",total);
    return 0;
}
