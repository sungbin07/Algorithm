//
//  main.cpp
//  10816
//
//  Created by 윤성빈 on 2016. 3. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#include <set>
using namespace std;



int main(int argc, const char * argv[]) {
 
    int n,m;
    multiset<int> s;
    
    scanf("%d",&n);
    for(int i = 0 ; i < n;i++){
        int x;
        scanf("%d",&x);
        s.insert(x);
    }
    
    
    scanf("%d",&m);
    for(int i = 0 ;i<m;i++){
        int x;
        scanf("%d",&x);
        printf("%d ",(int)s.count(x));
    }
    
    
   
    
    return 0;
}
