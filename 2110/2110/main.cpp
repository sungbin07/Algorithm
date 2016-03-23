//
//  main.cpp
//  2110
//
//  Created by 윤성빈 on 2016. 3. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//
/*
 처리과정
 1. 집과 공유기 개수를 입력받는다.
 2. 오름차순으로 배열을 정렬시킨다.
 3. 최소길이와 최대길이를 설정하여
 3.1 반을 계속나누어 비교한다
 3.2 mid의 길이로 필요한 공유기의 개수를 구한다.
 3.2.1 개수가 더 많으면
 3.2.1.1 start를 더 늘린다.
 3.2.2 개수가 더 적으면
 3.2.2.1 end를 더 줄인다.
 4. 최대 거리를 출력한다.
 5. 끝낸다.
 */

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

/*
 mid : 집 사이의 최대 거리
 */
bool check(vector<int>& v ,int mid, int k){
    
    int cnt = 1;
    int start = v[0];
    
    for(int i =1;i<v.size();++i){
        if(v[i] - start >= mid){
            cnt++;
            start = v[i];
        }
    }
    
    return cnt >= k;
}
int main(int argc, const char * argv[]) {

    int n,c;
    scanf("%d %d",&n,&c);
    vector<int> v(n);
    
    for(int i =0; i < n;++i){
        scanf("%d",&v[i]);
    }
    
    sort(v.begin(),v.end());
    //start : 최소 길이
    //end : 최대 길이
    int start = 1;
    int end = v[n-1] - v[0];
    
    int ans = start;
    while(start<=end){
        int mid = (start + end)/2;
        
        if(check(v,mid,c)){
            if( ans < mid){
                ans = mid;
            }
            start = mid + 1;
        } else {
            end = mid -1;
        }
    }
    printf("%d",ans);

    return 0;
}
