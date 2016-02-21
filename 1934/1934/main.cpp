//
//  main.cpp
//  1934
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 최소공배수

#include <cstdio>
int gcd(int x, int y){
    while( y != 0){
        int t = x%y;
        x = y;
        y = t;
    }
    return x;
}
int lcm(int x, int y ){
    int g = gcd( x, y);
    return x*y/g;
}
int main(int argc, const char * argv[]) {

    int n, x,y;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&x,&y);
        printf("%d\n",lcm(x,y));
    }
    

    return 0;
}
