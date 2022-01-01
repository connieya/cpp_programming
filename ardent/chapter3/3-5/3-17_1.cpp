#include <iostream>

//using namespace ::std;

namespace NS_1 {
    int a = 200;
}

int main() {
    int a = 100;

    std::cout << "main () 범위입니다." << std::endl;

    for (int i = 0; i < 3; ++i) {
        std::cout << "반복문 for의 범위입니다. " << std::endl;
        std::cout << "i= " << i << std::endl;
        std::cout << "namespace NS_1의 a = " << NS_1::a << std::endl;
        std::cout << "a =" << a << std::endl;
    }

    std::cout << "namespace NS_1의 a= " << NS_1::a << std::endl;
    std::cout << "a= " << a << std::endl;
    std::cout << "프로그램을 종료합니다." << std::endl;

    return 0;
}