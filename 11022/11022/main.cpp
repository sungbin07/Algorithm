//
//  main.cpp
//  11022
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// A+B - 8

#include <cstdio>

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
    }
    return 0;
}
