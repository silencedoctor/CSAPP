#include <iostream>

typedef struct {
    int32_t a[2];
    double d;
}TestA;

double test (int i) {
    volatile TestA t;
    t.d = 3.14159546746;
    t.a[i] = 6073743546;
    return t.d;
}

int main() {
    std::cout << test(0) << std::endl;
    std::cout << "ok0" << std::endl;
    std::cout << test(1) << std::endl;
    std::cout << "ok1" << std::endl;
    std::cout << test(2) << std::endl;
    std::cout << "ok2" << std::endl;
    std::cout << test(3) << std::endl;
    std::cout << "ok3" << std::endl;
    std::cout << test(4) << std::endl;
    std::cout << "ok4" << std::endl;
    std::cout << test(5) << std::endl;
    std::cout << "ok5" << std::endl;
    std::cout << test(6) << std::endl;
    std::cout << "ok6" << std::endl;
    std::cout << test(7) << std::endl;
    std::cout << "ok7" << std::endl;
    std::cout << test(8) << std::endl;
    std::cout << "ok8" << std::endl;
    std::cout << test(9) << std::endl;
    std::cout << "ok9" << std::endl;
    std::cout << test(10) << std::endl;
    std::cout << "ok10" << std::endl;
    std::cout << test(11) << std::endl;
    std::cout << "ok11" << std::endl;
    std::cout << test(12) << std::endl;
    std::cout << "ok12" << std::endl;
    return 0;
}
