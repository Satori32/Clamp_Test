#include <iostream>
#include <algorithm>

//method of find logical error by clamp.


template <class T>
bool InRange(const T& Value, const T& Low, const T& High) {
	if (Value < Low) { return false; }
	if (Value > High) { return false; }

	return true;
}

int main() {

	int High = 100;
	int Low = 10;

	int Value = 0;

	std::cout << Low << "<->" << High << std::endl;
	std::cin >> Value;

	auto X = std::clamp(Value, Low-1, High+1);

	bool F = InRange(X, Low, High);

	std::cout << (F? "True":"False") << std::endl;

	return 0;

}