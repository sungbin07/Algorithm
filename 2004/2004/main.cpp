//
//  main.cpp
//  2004
//
//  Created by 윤성빈 on 2016. 2. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 조합 0의 개수

/*
 처리과정
 nCm
 1. n 의 2와 5의 약수의 개수중 작은 것을 고른다.
 2. m 의 2와 5의 약수의 개수중 작은 것을 고른다.
 3. (n-m)의 2와 5의 약수의 개수중 작은 것을 고른다.
 4. 셋을 뺀다.
 5. 출력한다.
 */

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    long long n,m;
    cin >> n >> m;
  
    long long a=0,b=0;
    long long t = n;
    for(long long i = 1;i<=t;i*=2){
        a +=(t/i);
    }
    t = n;
    for( long long i=1;i<=t;i*=5){
        b +=(t/i);
    }

    t = m;
    for(long long i = 1;i<=t;i*=2){
        a -=(t/i);
    }
    t = m;
    for( long long i=1;i<=t;i*=5){
        b -=(t/i);
    }
    t = n -m;
    for(long long i = 1;i<=t;i*=2){
        a -=(t/i);
    }
    t = n-m;
    for( long long i=1;i<=t;i*=5){
        b -=(t/i);
    }
    cout<<min(a,b)<<endl;

    return 0;
}
