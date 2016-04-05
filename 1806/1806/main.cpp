//
//  main.cpp
//  1806
//
//  Created by 윤성빈 on 2016. 4. 4..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,s,arr[100001];
    
    scanf("%d %d",&n,&s);
    
    for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int left=0,right=0,sum=arr[0],ans=n+1;
    
    while( left<=right && n>right){
        if( sum < s){
            right++;
            sum+=arr[right];
        } else if (sum == s) {
            int temp = right - left+1;
            ans = min(ans,temp);
            right++;
            sum+=arr[right];
            
        } else { // sum > s
            int temp = right - left + 1;
            ans = min(ans,temp);
            sum-=arr[left];
            left++;
        }
    }
    
    if(ans > n) ans = 0;
    
    printf("%d",ans);
    
    return 0;
}
