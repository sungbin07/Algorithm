//
//  main.cpp
//  2609
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;

// 유클리드 호제법
int gcd(int x, int y){
    while( y!= 0){
        int t = x % y;
        x = y;
        y = t;
    }
    return x;
}
/* 재귀
int gcd(int x, int y){
    if( y == 0){
        return x;
    } else
        gcd(y,x%y);
    }
}
 */
int lcm( int x, int y ){
    int g = gcd(x,y);
    return x * y / g;
}
int main(int argc, const char * argv[]) {

    int a,b;
    
    scanf("%d%d",&a,&b);
    
    int g= 1;
    for (int i =2;i<=min(a,b);++i){
     if (a % i == 0 && b % i == 0)
         g = i;
    }
    printf("%d\n%d",g ,lcm(a,b));

    return 0;
}
