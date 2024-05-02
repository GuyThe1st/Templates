#include <iostream>
#include <type_traits>

template <typename Num>

Num half(Num value) {

	if constexpr (std::is_floating_point_v<Num>) {
		return value / 2.0;
	}
	else if constexpr (std::is_integral_v<Num>){
	return value /2.0;
	}
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	std::cout << half(a) << "\n";
	std::cout << half(b) << "\n";
	std::cout << half(c) << "\n";

	return 0;
}