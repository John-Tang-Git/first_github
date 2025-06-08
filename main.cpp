#include <iostream>
#include <string>
#include "Fraction.h"
#include "calculate.h"

int main(){
    int n;
    std::cin >> n;
    for (int i=0;i<n;++i){
        char expressionType;
        int x, y, z;
        std::string dataType;

        std::cin >> expressionType >> x >> y >> z >> dataType;
        if (dataType == "int"){
            std::cout << calculate<int>(expressionType, x, y, z) << std::endl;
        }
        else if (dataType == "fraction"){
            std::cout << calculate<Fraction>(expressionType, x, y, z) << std::endl;
        }
    }
    cout<<Fraction(2,-4)<<endl;
    return 0;
}

//我是一只兔子，喜欢吃菜叶子和胡萝卜
//我是一只猫，喜欢吃金渐层小兔兔
//我是一只小猪猪，喜欢吃奶
//我向一条狗要奶吃，结果它还吓唬我
//不过，我还是可以和小兔兔做朋友
//但是她喜欢吃的菜叶子真的不好吃呀