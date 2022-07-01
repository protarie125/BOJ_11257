#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		string p;
		cin >> p;

		int a, b, c;
		cin >> a >> b >> c;

		const auto& sum = a + b + c;

		cout << p << ' ' << sum << ' ';

		if (55 <= sum &&
			0.3 * 35 <= a &&
			0.3 * 25 <= b &&
			0.3 * 40 <= c) {
			cout << "PASS\n";
		}
		else {
			cout << "FAIL\n";
		}
	}

	return 0;
}