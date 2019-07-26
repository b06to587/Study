
#include <iostream>
#include <vector>
#include <algorithm>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

using namespace std;
int main() {
	for (int test_case = 1; test_case <= 10; test_case++) {
		vector<int> boxes;
		int T;
		cin >> T;
		for (int i = 0; i < 100; i++) {
			int box_height;
			cin >> box_height;
			boxes.push_back(box_height);
		}

		sort(boxes.begin(),boxes.end());

		for (int index = 0; index < T; index++) {
			boxes[0]++; 
			boxes[99]--;
			sort(boxes.begin(), boxes.end());
		}

		cout << "#" << test_case << " " << boxes[99] - boxes[0]<< endl;
		
		boxes.clear();
	}
	return 0;
}
