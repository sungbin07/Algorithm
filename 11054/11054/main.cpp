//
//  main.cpp
//  11054
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 가장 긴 바이토닉 부분 수열

/*
 처리과정
 dp[n] = n번째 가장 긴 증가 부분 수열의 길이
 dp2[n] =n번째 가장 긴 감소 부분 수열의 길이
 1. 해당 위치까지 제일 긴 증가 부분 수열을 구한다.
 2. 끝에서 해당 위치까지 제일 긴 감소 부분 수열을 구한다.
 3. 최대 값을 구한다.
 4. 출력한다.
 5. 끝낸다.
 */

#include <cstdio>
#define max(a,b) a>b? a:b

int dp[1001];
int dp2[1001];
int a[1001];

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++){
        dp[i] = 1;
        for( int j = 0 ; j < i;j++){
            if(a[j] < a[i] && dp[i] < dp[j] +1)
                dp[i] = dp[j] +1;
        }
    }
    
    for(int i = n-1; i>=0;i--){
        dp2[i] = 1;
        for(int k=n-1;k>i;k--){
            if(a[k] < a[i] && dp2[i] < dp2[k] +1)
                dp2[i] = dp2[k] +1;
        }
    }
    
    int ans = 0;
    
    for(int i=0;i<n;i++){
        ans=max(ans,dp[i]+dp2[i]-1);
    }
    
    printf("%d",ans);
    return 0;
}
