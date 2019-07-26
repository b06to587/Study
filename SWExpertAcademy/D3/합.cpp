#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		vector<int> numbers;

		int N;
		cin >> N;
		for (int j = 0; j < N; j++) {
			int num;
			cin >> num;
			numbers.push_back(num);
		}

		int max = -1001;

		for (int i = 1; i < N; i++) {
			if (numbers[i - 1] > 0 && numbers[i] + numbers[i - 1] > 0) {
				numbers[i] += numbers[i - 1];
			} 
			if (max < numbers[i]) {
				max = numbers[i];
			}

		}
		if (max < numbers[0]) {
			max = numbers[0];
		}

		cout << "#" << test_case << " " << max<< endl;
		
		numbers.clear();
	}
	return 0;
}
