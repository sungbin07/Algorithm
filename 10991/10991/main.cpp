//
//  main.cpp
//  10991
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++) cout<< " ";
        for(int k =0;k<=i;k++) cout<<"* ";
        cout<<endl;
    }
    return 0;
}
