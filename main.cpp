#include <iostream>
#include "test.cpp"
int main() {
    std::cout << "As float " << f(49416561932694.046875) << std::endl;
    std::cout << "Float cast to i32 " << i32(49416561932694.046875) << std::endl;
    std::cout << "Float cast to i64 " << i64(49416561932694.046875) << std::endl;
    std::cout << "Float cast to i32 cast to i64 " << i32_64(49416561932694.046875) << std::endl;
    std::cout << "Float cast to i64 cast to i32 " << i64_32(49416561932694.046875) << std::endl;
}
