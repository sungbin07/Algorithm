//
//  main.cpp
//  1850
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;
long long gcd(long long x, long long y){
    while( y != 0){
        long long t= x%y;
        x = y;
        y = t;
    }
    return x;
}
int main(int argc, const char * argv[]) {

    long long x, y;
    scanf("%lld%lld",&x,&y);
    long long n = gcd(x,y);
    
    for(int i =0; i<n; ++i)
        printf("1");

    return 0;
}
