//
//  main.cpp
//  1463
//
//  Created by 윤성빈 on 2016. 2. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 1로 만들기

/*
 처리과정
 N번째 최소값이 되려면 N/3 , N/2 , N-1 의 값 최소값중에서 1을 더하면 된다.
 dp[n] = n을 1로 만드는데 최소 연산 횟수
 */

#include <cstdio>
#define MAX 1000001

int dp[MAX];

int calc( int n ) {
    if(n == 1) return 0;
    
    if(dp[n] > 0) return dp[n];

    dp[n] = calc(n-1) +1;
    
    if(n % 3 == 0 ){
        int temp = calc(n/3) + 1;
        if(dp[n] > temp) dp[n] = temp;
    }
    if(n % 2 == 0){
        int temp = calc(n/2) + 1;
        if(dp[n] > temp) dp[n] = temp;
    }

    
    
    return dp[n];
}
int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    printf("%d",calc(n));

    return 0;
}
