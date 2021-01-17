//
// Created by Jiahao FENG on 16/1/2021.
//

#include <iostream>
#include <type_traits>
#include <typeinfo>

template <typename T1, typename T2>
std::common_type_t<T1, T2> max_typedecay(T1 a, T2 b){
    return b < a ? a : b;
}

int main(){
    int a = 5;
    float b = 8.;
    double d = 20;

    auto c = ::max_typedecay(a, b);
    std::cout << "max(a, b) = " << c << std::endl;
    std::cout << "Type of c: " << typeid(c).name() << std::endl;

    std::cout << std::endl;

    auto e = ::max_typedecay(b, d);
    std::cout << "max(b, d) = " << e << std::endl;
    std::cout << "Type of e: " << typeid(e).name() << std::endl;

    return 0;
}