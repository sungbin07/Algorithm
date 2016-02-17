//
//  main.cpp
//  1912
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 연속합

/*
 처리과정
 dp[n] : n번째 수로 끝나는 가장 큰 연속합
 dp[n] = max(a[n],dp[n-1]+a[n])
 1. 해당 위치까지 연속합을 구한다.
 2. 현재값과 새로운 값(연속합 + 현재값)을 비교한다.
 3. 최대값을 저장한다.
 4. dp배열의 최대값을 찾아 출력한다.
 5. 끝낸다.
 */

#include <cstdio>
#define max(a,b) a>b? a:b
int dp[100001];
int a[100001];

int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    
    for(int i =1;i<=n;i++){
        scanf("%d",&a[i]);
        dp[i] = a[i];
    }

    for(int i = 1;i<=n;i++)
        dp[i] = max(dp[i],dp[i-1]+a[i]);
    
    int ans = dp[n];
    for(int i=n;i>=1;i--)
        ans=max(ans,dp[i]);

    printf("%d",ans);
    return 0;
}
