//
//  main.cpp
//  2624
//
//  Created by 윤성빈 on 2016. 2. 18..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
using namespace std;

int dp[101][10001];
int coin[101];
int cnt[101];

int main(int argc, const char * argv[]) {
    int T,N;
    cin>>T>>N;
    
    dp[0][0] =1;
    for(int i=1;i<=N;i++){
        dp[i][0] = 1;
        cin >>coin[i]>>cnt[i];
    }
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=T;j++){
            for(int k =0;k<=cnt[i];k++){
                if( coin[i]*k > j) break; //금액초과
                dp[i][j] += dp[i-1][j-coin[i]*k];
            }
        }
    }
    
    cout<<dp[N][T];
    
    return 0;
}
