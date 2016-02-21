//
//  main.cpp
//  10872
//
//  Created by 윤성빈 on 2016. 2. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
// 팩토리얼

#include <cstdio>

//int factorial(int n){
//    if (n ==1) return 1;
//    else
//        return n * factorial(n-1);
//    
//}
int main(int argc, const char * argv[]) {

    int n;
    scanf("%d",&n);
    int ans =1;
    for(int i =2;i<=n;i++){
        ans*=i;
    }
    printf("%d",ans);
    return 0;
}
