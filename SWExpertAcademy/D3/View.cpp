#include <iostream>
#include <vector>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

using namespace std;
int main() {
	for (int test_case = 1; test_case <= 10; test_case++) {
		vector<int> buildings;

		int T;
		cin >> T;
		for (int i = 0; i < T; i++) {
			int building_length;
			cin >> building_length;
			buildings.push_back(building_length);
		}
		int ans = 0;
		for (int j = 2; j < T-2; j++) {
			if (buildings[j] > MAX(buildings[j + 2], buildings[j - 2]) && buildings[j] > MAX(buildings[j + 1], buildings[j - 1])) {	
				int long_building = MAX(MAX(buildings[j + 2], buildings[j - 2]),MAX(buildings[j + 1], buildings[j - 1]));
				ans += buildings[j] - long_building;
			}
		}
		cout << "#" << test_case << " " << ans << endl;
		
		buildings.clear();
	}
	return 0;
}
