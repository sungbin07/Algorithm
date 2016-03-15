//
//  main.cpp
//  1654
//
//  Created by 윤성빈 on 2016. 3. 6..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//  랜선자르기
/*
 처리과정
 1. 길이와 개수를 입력받는다.
    1.1 제일 긴 랜선을 찾는다
 2. 시작점이 끝점이랑 같거나 커질때까지 반복한다.
    2.1 원하는 개수보다 많으면
        2.1.1 start를 움직인다.
    2.2 원하는 개수보다 적으면
        2.2.1 end를 움직인다.
 3. 최대 길이를 출력한다.
 */
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int n,k;

bool check(long long x) {
    int cnt = 0;
    for(int i = 0;i <n;i++){
        cnt += v[i]/x;
    }
    return cnt >= k;
}

int main(int argc, const char * argv[]) {

    scanf("%d %d",&n,&k);
    long long max = 0;
    for(int i = 0;i<n;i++){
        int x;
        scanf("%d",&x);
        if( max < x){
            max = x;
        }
        v.push_back(x);
    }


    long long ans = 0;
    long long start = 1;
    long long end = max;
    while( start <= end) {
        long long mid = (start + end) /2;
        
        if(check(mid)) { // 크면
            if( ans < mid ){
                ans = mid;
            }
            start = mid + 1;
        } else { // 작으면
            end = mid -1;
        }
    }
  
    printf("%lld\n",ans);

    return 0;
}
