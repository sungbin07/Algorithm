//
//  main.cpp
//  2446
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    int i,j,k;

    for(i=0;i<n;i++){
        for(j=0;j<i;j++) cout << " ";
        for(k=0;k<2*(n-i)-1;k++) cout << "*";
        cout<<endl;
    }
    int q;
    for(q=i-2;q>=0;q--){
        for(j=0;j<q;j++) cout << " ";
        for(k=0;k<2*(n-q)-1;k++) cout << "*";
        cout<<endl;
    }
    return 0;
}
