#include <iostream>

int main() {
    int a, b;
    std::cout << "Podaj szerokosc: ";
    std::cin >> a;
    std::cout << "Podaj wysokosc: ";
    std::cin >> b;
    for (int i = 0; i < a*1.6; ++i) {
    std::cout << "--";
	}
std::cout << " " << std::endl;
    for (int i = 0; i < b; ++i) {
    	
        std::cout << "|";
        for (int j = 0; j < a; ++j) {
        	
            if ((i + j) % 2 == 0) {
                std::cout << "*";
            } else {
                std::cout << "#";
            }
            std::cout << "--";
        }
        std::cout << "|" << std::endl;
    }
    return 0;
}
