//
//  main.cpp
//  11005
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 진법 변환 2

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int x,y;
    cin >> x >> y;
    vector<char> v;
    while( x > 0){
        int r = x % y;
        if( r < 10){
            v.push_back(r+'0');
        } else {
            v.push_back(r-10+'A');
        }
        x /= y;
    }
    for( int i = v.size()-1;i>=0;--i)
        cout<< v[i];
    cout<<endl;
    return 0;
}
