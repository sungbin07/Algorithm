//
//  main.cpp
//  8393
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>

int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=1;i<=n;i++)
        ans+=i;
    
    printf("%d",ans);
    return 0;
}
