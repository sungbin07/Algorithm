//
//  main.cpp
//  2445
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    int i;
    for(  i = 1; i <= n; i++){
        for(int j=1;j<=i;j++)
            cout <<"*";
        for(int j=n-i;j>0;j--)
            cout<<"  ";
        for(int j=1;j<=i;j++)
            cout <<"*";
        cout<<endl;
    }
    for(int k=i-2;k>0;k--){
        for(int j=1;j<=k;j++)
            cout <<"*";
        for(int j=n-k;j>0;j--)
            cout<<"  ";
        for(int j=1;j<=k;j++)
            cout <<"*";
        cout<<endl;
    }
    return 0;
}
