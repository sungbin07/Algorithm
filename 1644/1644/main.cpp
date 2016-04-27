//
//  main.cpp
//  1644
//
//  Created by 윤성빈 on 2016. 4. 6..
//  Copyright © 2016년 MeteorBin. All rights reserved.
//

/*
 처리과정
 1. 범위를 입력받는다.
 2. 숫자가 소수인지 판별한다.
    2.1 소수배열을 만든다.
 3. 소수의 부분을 합을 처음부터 구한다.
 4. 경우의 수를 출력한다.
 5. 끝낸다.
 */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    vector<bool> c(n+1);
    vector<int> p;
    for (int i=2; i<=n; i++) {
        if (c[i] == false) {
            p.push_back(i);
            for (int j=i*2; j<=n; j+=i) {
                c[j] = true;
            }
        }
    }
    
    int l=0;
    int r=0;
    int sum = p.empty() ? 0 : p[0];
    int ans = 0;
    
    while (l <= r && r < p.size()) {
        if (sum <= n) {
            if (sum == n) {
                ans += 1;
            }
            r++;
            if (r < p.size()) {
                sum += p[r];
            }
        } else {
            sum -= p[l++];
        }
    }
    
    cout << ans << '\n';
    return 0;
}
