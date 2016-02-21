//
//  main.cpp
//  2747
//
//  Created by 윤성빈 on 2016. 2. 18..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
using namespace std;
int dp[46]={0,1,1};

int calc(int n){
    if ( n == 0 ) return 0;
    if ( n == 1 || n == 2 ) return 1;
    
    if(dp[n] >0 ) return dp[n];
    
    dp[n] =calc(n-1)+calc(n-2);
    
    return dp[n];
}
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    cout<<calc(n);
    return 0;
}
