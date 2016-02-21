//
//  main.cpp
//  6588
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int c[1000001]={1,1};
    int pn=0;
    int p[1000001];
    for (int i = 2; i <= 1000; i++) {
        if (c[i] == false) {
            p[pn++] = i;
            for (int j = i * i; j <= 1000000; j += i) {
                c[j] = true;
            }
        }
    }
    
    while(1){
        int n,i;
        cin >> n;
        if ( n == 0) break;

        for(  i = 0 ; i < pn ;++i){
            if(c[n-p[i]] == false){
                cout << n <<" = "<<p[i]<<" + "<<n-p[i]<<endl;
                break;
            }
        }
        if(i == pn) cout <<"Goldbach's conjecture is wrong.";
        
    }
    return 0;
}
