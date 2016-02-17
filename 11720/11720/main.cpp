//
//  main.cpp
//  11720
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>

int main(int argc, const char * argv[]) {

    int n,a,ans=0;
    scanf("%d",&n);
    while(n--){
        scanf("%1d",&a);
        ans+=a;
    }
    printf("%d",ans);
    return 0;
}
