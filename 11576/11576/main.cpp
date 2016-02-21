//
//  main.cpp
//  11576
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
void calc( int n,int b){
    
    if(n ==0) return;
    calc(n/b,b);
    printf("%d ",n%b);

    
}
int main(int argc, const char * argv[]) {

    int a,b,n,ans = 0;
    scanf("%d %d",&a,&b);
    scanf("%d",&n);
    for(int i= 0; i < n ; ++i){
        int k;
        scanf("%d",&k);
        ans = ans * a + k;
    }

    calc(ans,b);
    return 0;
}
