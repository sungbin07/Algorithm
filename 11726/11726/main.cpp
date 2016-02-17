//
//  main.cpp
//  11726
//
//  Created by 윤성빈 on 2016. 2. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 2 x n 타일링

/*
 처리과정
 dp[n] = n번째 직사각형의 수
 dp[n] = dp[n-1] + dp[n-2]
 
 */

#include <cstdio>
#define MAX 1001

int dp[MAX] ={1,1};

int calc(int n){
    if( n == 1 || n == 0) return 1;
    if(dp[n] > 0) return dp[n];
    
    dp[n] = calc(n-1)+calc(n-2);
    dp[n] %= 10007;
    return dp[n];
}
int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    
    printf("%d",calc(n));

    return 0;
}
