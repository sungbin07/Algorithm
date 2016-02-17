//
//  main.cpp
//  1924
//
//  Created by 윤성빈 on 2016. 2. 17..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>


int main(int argc, const char * argv[]) {

    int a,b;
    int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    scanf("%d%d",&a,&b);
    
    int ans = 0;
   
    for(int i=0;i<a-1;i++)
        ans+=mon[i];
    
    int t = (ans%7 + b-1 )%7;
    switch (t) {
        case 0:
            printf("MON");
            break;
        case 1:
            printf("TUE");
            break;
        case 2:
            printf("WED");
            break;
        case 3:
            printf("THU");
            break;
        case 4:
            printf("FRI");
            break;
        case 5:
            printf("SAT");
            break;
        case 6:
            printf("SUN");
            break;
        default:
            break;
    }
    return 0;
}
