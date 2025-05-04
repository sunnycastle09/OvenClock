#include <iostream>

int main()
{
	int H, M, duration,pH=0,tmp;
	std::cin >> H >> M >> duration;
	if (duration > 59) {
		pH = duration / 60;
		M += duration - 60 * pH;
	}
	else
		M += duration;
	if (M > 59) {
		pH++;
		M -= 60;
	}
	H += pH;
	if (H > 23) {
		tmp = H - 24;
		H = tmp;
	}
	std::cout << H << " " << M;
}