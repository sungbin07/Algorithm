//
//  main.cpp
//  3015
//
//  Created by 윤성빈 on 2016. 2. 16..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 오아시스 재결합

#include <cstdio>

int a[500001];
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    for(int i = 0 ; i < n;i++)
        scanf("%d",&a[i]);
    
    int ans = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
                ans++;
            if(a[i]<a[j]){
                ans++;
                break;
            }
        }
        for(int j=i-1;j>=0;j--){
            if(a[n-i]<a[j]){
                ans++;
                break;
            }
        }

    }
//    for(int i=n-1;i>=1;i--){
//        for(int j=i-1;j>=0;j--){
//            if(a[i]<a[j]){
//                ans++;
//                break;
//            }
//        }
//    }
    
    printf("%d",ans);
    return 0;
}
