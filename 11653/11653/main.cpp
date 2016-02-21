//
//  main.cpp
//  11653
//
//  Created by 윤성빈 on 2016. 2. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    for( int i = 2 ; i*i<=n;++i){
        while(n % i == 0){
            cout<<i<<endl;
            n/=i;
        }
    }
    if(n>1)
        cout<<n<<endl;
    return 0;
}
