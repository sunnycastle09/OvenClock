#include <iostream>

int main()
{
	int H, M, tmp, mH = 0;
	std::cin>> H >> M;
	
	if (M < 45) { //M설정완료
		tmp = 45 - M;
		M = 60-tmp;
		mH = 1;
	}
	else
		M -= 45;
	H -= mH;
	if (H < 0)
		H = 23;
	std::cout << H << " " << M;
}