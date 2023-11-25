#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	// Find missing element in Array -- Hash Technique
	std::vector<int> A{ 3, 7, 4, 9, 12, 6, 1, 11, 2, 10 };
	auto l = static_cast<int>(*std::min_element(A.begin(), A.end()));
	auto h = static_cast<int>(*std::max_element(A.begin(), A.end()));
	std::vector<int> B(h - l + 1, 0);

	for (int i = 0; i < A.size(); ++i)
	{
		B[A[i] - l]++;
	}

	/* Observe B array.
	for (const auto& num : B) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
	*/

	for (int i = 0; i < A.size(); ++i)
	{
		if (B[i] == 0) {
			std::cout << "Missing elements are: " << i + l << std::endl;
		}
	}

	return 0;
}