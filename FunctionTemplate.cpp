#include <iostream>
#include <array>


template <typename Type> void pow(const Type a) {
	std::cout << "[IN]: " << a << std::endl;
	std::cout << "[OUT]: " << a*a << std::endl;
	return;
}

template <typename Type> void pow(const Type* a, size_t size) {
	std::cout << "[IN]: ";
	for (size_t i = 0; i < (size - 1); i++) {
		std::cout << a[i];
		if (i != size - 1) {
			std::cout << ", ";
		}
	}

	std::cout << std::endl;

	std::cout << "[OUT]: ";
	for (size_t i = 0; i < (size - 1); i++) {
		std::cout << a[i] * a[i];
		if (i != size - 1) {
			std::cout << ", ";
		}
	}
	return;
}

int main() {
	int a[5] = {1,2,3,4,5};
	pow(5);
	pow(a,std::size(a));
}