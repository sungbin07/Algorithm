//
//  main.cpp
//  11053
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 가장 긴증가하는 부분 수열

/*
 처리과정
 dp[n] = n번째 까지의 가장긴 증가하는 부분수열의 길이
 1. 위치의 배열 값을 비교한다.
 2. 현재위치의 값이 더 크다면
    2.1 수열의 크기가 더 큰 경우에만 갱신시킨다.
 3. 가장 큰 값을 출력한다
 4. 끝낸다
 */

#include <cstdio>
#define max(a,b) a>b?a:b
int dp[1001];
int a[1001];


int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int i = 0 ; i < n ;i++){
        dp[i] = 1;
        for(int j=0;j<i;j++){
            if(a[j] < a[i] && dp[j]+1 > dp[i]){
                dp[i] = dp[j]+1;
            }
        }
    }
    
    int ans = 0;
    for(int i = 0; i< n; i++){
        ans = max(ans,dp[i]);
    }
    
    printf("%d",ans);
    return 0;
}
