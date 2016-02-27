//
//  main.cpp
//  2331
//
//  Created by 윤성빈 on 2016. 2. 24..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  반복수열

#include <iostream>
#include <cmath>
using namespace std;
int visited[1000000];
int calc(int a ,int p){
    int ans = 0;
    while(a >0){
        int b = a%10;
        ans+=pow(b,p);
        a/=10;
    }
    return ans;
}

int number(int a, int p , int cnt){
    if(visited[a])
        return visited[a] - 1;
    
    visited[a] = cnt;
    return number(calc(a,p),p,cnt+1);
}

int main(int argc, const char * argv[]) {

    int a,p;
    cin >> a >> p;
    cout << number(a,p,1) << endl;
    return 0;
}
