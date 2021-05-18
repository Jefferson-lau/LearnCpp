#include <iostream>

//# 和 ## 操作符是和#define宏使用的.
// 使用# 使在#后的首个参数返回为一个带引号的字符串.
#define to_string(s)    #s
#define concatenate(x, y) x ## y
#define absolute_value(x) ((x) < 0 ? -(x) : (x))

int main() {
    //理解为 cout << "Hello World!" << endl;
    std::cout << to_string(Hello World!) << std::endl;

    int xy = 10;
    //解释为 cout << xy << endl;
    std::cout << concatenate(x, y) << std::endl;

    int x = -1;
    while(absolute_value(x)){
        std::cout << "1";
        break;
    }





    return 0;
}
