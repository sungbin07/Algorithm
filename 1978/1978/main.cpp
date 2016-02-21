//
//  main.cpp
//  1978
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n  <2 ) return false;
    
    for( int i =2 ; i*i <= n;i++){
        if( n % i == 0)
            return false;
    }
        return true;
    
}
int main(int argc, const char * argv[]) {

    int n;
    cin >>n;
    int ans =0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(isPrime(a))
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
