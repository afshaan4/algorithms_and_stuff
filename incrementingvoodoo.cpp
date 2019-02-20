#include<iostream>

int main(int argc, char const *argv[]) {
	int a, r, yeet;
	std::cout << "val of r:";
	std::cin >> r;
	std::cout << "val of yeet: ";
	std::cin >> yeet;
	// this line ends up incrementing r, hmmmmmm
	a = ++r+2;
	// returns (init r + 1) and a, hmmmmmmmmmmmm
	std::cout << "r:" << r << " a:" << a << '\n';

	// yeet++ increments but doesn't show, then ++yeet increments
	// on top of what yeet++ did and shows an increment of +2
	std::cout << yeet++ << "," << ++yeet <<'\n';
	// see if we reverse it both show up as the same number
	std::cout << ++yeet << "," << yeet++ <<'\n';
	// but the last yeet++ did do its job
	std::cout << yeet << '\n';
	return 0;
}
