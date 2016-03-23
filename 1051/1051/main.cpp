////
////  main.cpp
////  1051
////
////  Created by 윤성빈 on 2016. 3. 16..
////  Copyright © 2016년 MeteorBin. All rights reserved.
////
//
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int arr[51][51] ={0};
//int main(int argc, const char * argv[]) {
//
//    int n,m,m1;
//    scanf("%d %d",&n,&m);
//    m1 = min(n,m);
//    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            scanf("%1d",&arr[i][j]);
//        }
//    }
//    int ans = 0;
//    while(m1>0){
//        for(int i = 0; i<=n-m1;i++){
//            for(int j=0;j<=m-m1;j++){
//             if(arr[i][j] == arr[i+m1-1][j] && arr[i][j] == arr[i][j+m1-1]
//                && arr[i][j] == arr[i+m1-1][j+m1-1]){
//                 ans = max(ans,m1*m1);
//                 break;
//             }
//            }
//        }
//        m1--;
//    }
//    printf("%d",ans);
//    return 0;
//}
#include <iostream>

using namespace std;
int n, m;
char arr[51][51];
int max_t = 0;

int main(int argc, char* argv[]) {
    cin >> n >> m;
    
    int size = n > m ? m : n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 1; k < size; k++) {
                if (i + k >= n || i + j >= m)
                    break;
                if (arr[i][j] == arr[i + k][j + k] &&
                    arr[i][j] == arr[i + k][j] &&
                    arr[i][j] == arr[i][j + k]) {
                    if (k > max_t) {
                        max_t = k;
                    }
                }
            }
        }
    }
    
    cout << (max_t + 1) * (max_t + 1);
    
    return 0;
}
