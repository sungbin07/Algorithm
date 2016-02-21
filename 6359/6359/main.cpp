//
//  main.cpp
//  6359
//
//  Created by 윤성빈 on 2016. 2. 18..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin >>t;
    
    while(t--){
        int a,m;
        cin >>a;
        for(m =1; m*m<=a;m++);
        cout<<m-1<<endl;
    }

    return 0;
}
