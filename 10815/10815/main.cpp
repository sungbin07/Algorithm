//
//  main.cpp
//  10815
//
//  Created by 윤성빈 on 2016. 3. 22..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,m;
    int an[500001];
    int am[500001];
    
    scanf("%d",&n);
    
    for(int i =0; i <n;i++)
        scanf("%d",&an[i]);
    
    scanf("%d",&m);
    
    for(int i =0;i<m;i++)
        scanf("%d",&am[i]);
    
    
    sort(an,an+n);
    
    for(int i =0;i<m;i++){
        
        int left = 0;
        int right = n-1;
        
        while(left<= right){
            int mid = (left + right)/2;
            
            if(an[mid] == am[i]) {
                printf("1 ");
                break;
            } else if( an[mid] > am[i] ){
                right = mid -1;
            } else if( an[mid] < am[i] ){
                left = mid +1;
            }
        }
        
        if(left > right)
            printf("0 ");
        
        
        
        
    }    return 0;
}
