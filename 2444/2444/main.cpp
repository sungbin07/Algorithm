//
//  main.cpp
//  2444
//
//  Created by 윤성빈 on 2016. 2. 18..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 별찍기 -7

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int n;
    cin >>n;
    for(int i=1;i<=n;++i){
        for(int j = n-i;j>0;j--) cout <<" ";
        for(int k=0;k<2*i-1;++k) cout <<"*";
        cout<<endl;
    }
    for(int i=1;i<=n;++i){
        for(int j = 0;j<i;j++) cout <<" ";
        for(int k=0;k<2*(n-i)-1;++k) cout <<"*";
        cout<<endl;
    }
    return 0;
}
