//
// Created by Jiahao FENG on 16/1/2021.
//

#include <iostream>
#include <typeinfo>

template <typename T1, typename T2>
auto max_decltype(T1 a, T2 b) -> decltype(b < a? a:b){
    std::cout << "Type of a: " << typeid(a).name() << std::endl;
    std::cout << "Type of b: " << typeid(b).name() << std::endl;
    return b < a ? a : b;
}

int main(){
    int a = 5;
    float b = 8.;
    double d = 20;

    auto c = ::max_decltype(a, b);
    std::cout << "max(a, b) = " << c << std::endl;
    std::cout << "Type of c: " << typeid(c).name() << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    auto e = ::max_decltype(b, d);
    std::cout << "max(b, d) = " << e << std::endl;
    std::cout << "Type of e: " << typeid(e).name() << std::endl;

    return 0;
}