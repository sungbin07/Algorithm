//
//  main.cpp
//  2805
//
//  Created by 윤성빈 on 2016. 3. 15..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  나무 자르기
/*
 처리과정
 1. 나무와 필요한 나무 길이를 입력받는다.
 2. start가 end보다 크거나 같을때까지 반복한다.
    2.1. 길이보다 길다면
        2.1.1 start를 증가시킨다.
    2.2. 길이보다 짧다면
        2.2.1 end를 줄인다.
 3. 최대 높이를 구한다.
 4. 출력한다.
 5. 끝낸다.
 */

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n;
long long k;

bool check(vector<long long> &a, long long m){
    long long height = 0;
    for(int i=0;i<a.size();++i){
        if(a[i] - m > 0){  //나무가 자를 높이보다 큰 나무에 대해서만
            height += (a[i] - m);
        }
    }
    return height>= k;
}

int main(int argc, const char * argv[]) {

    scanf("%d %lld",&n,&k);
    vector<long long> v(n);
    long long start = 0;
    long long end = 0;
    
    for(int i=0;i<n;++i){
        scanf("%lld",&v[i]);
        if(end < v[i]){
            end = v[i];
        }
    }
    
    long long ans = 0;
    while(start <= end){
        long long mid = (start + end) /2;
        if(check(v,mid)){ //원하는 높이보다 크다면
            ans = max(ans,mid); // 최대 높이 갱신
            start = mid + 1;
        } else {
            end = mid -1;
        }
    }
    printf("%lld",ans);
    

    return 0;
}
