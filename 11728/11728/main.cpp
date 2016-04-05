//
//  main.cpp
//  11728
//
//  Created by 윤성빈 on 2016. 3. 23..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>

int a[1000000];
int b[1000000];
int c[1000000];

int main(int argc, const char * argv[]) {
   
    int n,m;
    scanf("%d %d",&n,&m);
    
    for(int i =0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i =0;i<m;i++)
        scanf("%d",&b[i]);
    
    int i = 0, j =0, k = 0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    
    while(i<n){
        c[k++] = a[i++];
    }
    while ( j<m){
        c[k++] = b[j++];
    }
    
    for(int i = 0 ; i < k;i++)
        printf("%d ",c[i]);
    
    return 0;
}
