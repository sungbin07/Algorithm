//
//  main.cpp
//  11055
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 가장 큰 증가 부분 수열

/*
 처리과정
 dp[n] : n번째에서 가장 큰 증가 수열의 합
 1. 위치의 배열 값과 비교한다.
 2. 현재 위치가 더 크다면
    2.1 배열의 합이 더 크다면 갱신한다.
 3. 가장 큰 배열의 합을 출력한다.
 4. 끝낸다.
 */
#include <cstdio>
#define max(a,b) a>b ? a:b
int dp[1001];
int a[1001];
int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    
    for(int i =0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int i = 0; i < n ;i++){
        dp[i] = a[i];
        for(int j =0;j<i;j++){
            if(a[j] <a[i] && dp[j] + a[i] > dp[i]){
                dp[i] = dp[j]+a[i];
            }
        }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans = max(ans,dp[i]);
    }
    printf("%d",ans);
    return 0;
}
