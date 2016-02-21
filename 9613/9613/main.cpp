//
//  main.cpp
//  9613
//
//  Created by 윤성빈 on 2016. 2. 21..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>

int gcd(int x, int y){
    if ( y == 0)
        return x;
    else
        return gcd(y,x%y);
}

int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        int arr[100];
        int ans = 0;
        scanf("%d",&a);
        for(int i = 0 ; i < a;i++){
            scanf("%d",&arr[i]);
        }
        for(int i = 0 ; i < a-1 ; ++i){
            for(int j =i+1; j< a; ++j){
                ans+=gcd(arr[i],arr[j]);
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}
