#include <iostream>
#include <string>

template <typename T>
T galactus_the_devourer_of_const(const T& v) {
    return false ? std::move(T{}) : std::move(v);
}

int main() {
    const std::string food = "asdf";
    std::cout << "before: " << food << '\n';
    galactus_the_devourer_of_const(food);
    std::cout << "after:  " << food << '\n';
    return 0;
}
