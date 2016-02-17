//
//  main.cpp
//  2442
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {

    int n;
    cin >> n;

    for(int p=1;p<=n;p++){
        for(int i=n-p;i>0;i--)
            cout<<" ";
        for(int j =0;j<2*p -1;j++)
            cout<<"*";
        cout<<endl;
    }
    
    return 0;
}
