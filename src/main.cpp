#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	while (5 <= n) {
		cout << 'V';
		n -= 5;
	}

	while (0 < (n--)) {
		cout << 'I';
	}

	return 0;
}