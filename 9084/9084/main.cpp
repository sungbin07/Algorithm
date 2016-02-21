//
//  main.cpp
//  9084
//
//  Created by 윤성빈 on 2016. 2. 18..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 동전

/*
 처리과정
 dp[k] : k금액까지의 경우의 수
 dp[k] += dp[k-coin[j]]
 */
#include <iostream>
using namespace std;


int a[21]={0};

int main(int argc, const char * argv[]) {

    int t,n,end;
    cin >> t;
    
    while(t--){
        int dp[10001]={0};
        cin >>n;
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>end;
        dp[0] = 1;
        for(int i=0;i<n;i++){
            for(int j = a[i];j<=end;j++){
                dp[j] += dp[j-a[i]];
            }
        }
        cout<<dp[end]<<endl;
    }
    return 0;
}
