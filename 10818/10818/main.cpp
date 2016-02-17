//
//  main.cpp
//  10818
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {

    int n, ma = -1000000,mi=1000000;
    int a;
    cin >> n;
    while(n--){
        cin >>a;
        ma = max(ma,a);
        mi = min(mi,a);
    }
    cout << mi <<" " << ma;
    
    return 0;
}
