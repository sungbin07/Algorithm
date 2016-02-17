//
//  main.cpp
//  10992
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    for(int i = 1; i < n; i++) cout<<" ";
    if(n!=1)cout<<"*"<<endl;
    
    for(int i=2;i<=n-1;i++){
        for(int j=n-i;j>0;j--)cout <<" ";
        cout<<"*";
        for(int j=1;j<=2*(i-1)-1;j++)cout<<" ";
        cout<<"*"<<endl;
    }
    
    for(int i=1;i<=2*n-1;i++)cout<<"*";
    cout<<endl;
    return 0;
}