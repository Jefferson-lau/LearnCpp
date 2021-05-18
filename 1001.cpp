//
// Created by 13092 on 2021/5/18.
//
#include <iostream>
int main(){
    int n = 0;
    int step = 0;
    std::cin >> n;
    while (1) {
        if (0 == n % 2 && n != 1) {
            n /= 2;
            step++;
        } else if (1 == n % 2 && n != 1) {
            n = (3 * n + 1) / 2;
            step++;
        }
        if(1==n) break;
    }
    std::cout << step;
    return 0;
}
