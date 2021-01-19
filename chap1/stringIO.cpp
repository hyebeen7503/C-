#include <iostream>

int main(void){
    char name[200];
    char lang[200];

    std::cout << "당신의 이름은 무엇입니까 ?" << std::endl;
    std::cin >> name;

    std::cout << "당신이 선호하는 언어는 무엇입니까 ? " << std::endl;
    std::cin >> lang;

    std::cout << "제 이름은 " << name << "이고, 선호하는 언어는 " << lang << "입니다." << std::endl;

    return 0;
}