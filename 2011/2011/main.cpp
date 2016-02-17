//
//  main.cpp
//  2011
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 암호코드
/*
 처리과정
 dp[n] : n번째까지 나오는 경우의 수
 dp[n] += dp[n-1]  (1<= k <= 9)
          dp[n-2]  (10 <= k <= 29)
 */

#include <cstdio>
#include <cstring>
int dp[5001] = {1};
int mod = 1000000;
int main(int argc, const char * argv[]) {

    char a[5002];
    
    scanf("%s",a+1);
    int len = strlen(a+1);
    for(int i=1;i<=len;i++){
        
        int t = a[i] -'0';
        if( 0< t && t<= 9){
            dp[i] += dp[i-1];
            dp[i] %= mod;
        }
        
        if( i == 0) continue;
        if(a[i-1]=='0')continue;
        
        t = (a[i-1] -'0') *10 + a[i]-'0';
        
        if(10<= t && t<=26){
            dp[i] += dp[i-2];
            dp[i] %= mod;
        }
    }

    printf("%d",dp[len]);
    
    return 0;
}
