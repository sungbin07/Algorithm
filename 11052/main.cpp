//
//  main.cpp
//  11052
//
//  Created by 윤성빈 on 2016. 2. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 붕어빵 판매하기

/*
 처리과정
 dp[n] : n개 붕어빵을 파는 최대 수익
 dp[n] =  dp[n-1]+arr[1]
        , dp[n-2]+arr[2]
        , dp[n-3]+arr[3] ...
        , dp[n-n]+arr[n]
        의 최대값
 */
#include <cstdio>
#define max(a,b) a>b? a: b

int dp[1001];
int arr[1001];
int calc(int n){
    if( n == 1) return arr[1];
    
    if(dp[n]>0) return dp[n];
    
    for(int i=1;i<=n;i++){
        dp[n] = max(dp[n],calc(n-i) + arr[i]);
    }
    return dp[n];
}
int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    
    for(int i =1;i<=n;i++)
        scanf("%d",&arr[i]);
    
    printf("%d",calc(n));
    return 0;
}
