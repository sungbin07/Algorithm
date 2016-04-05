//
//  main.cpp
//  2003
//
//  Created by 윤성빈 on 2016. 4. 4..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>

int main(int argc, const char * argv[]) {
    
    int n,m;
    int arr[100000];
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int f = 0,e = 0, ans=0 , sum = arr[0] ;
    
    while( f < n && f >= e){
        if( sum > m){
            sum-=arr[e];
            e++;
        } else if ( sum == m){
            ans++;
            f++;
            sum+=arr[f];
        } else { // sum < m
            f++;
            sum+=arr[f];
        }
    }
    
    printf("%d\n",ans);
    
    
    return 0;
}
