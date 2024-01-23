#include <iostream>

using namespace std;

int is_min_distance(const int now_x, const int now_y, const int to_x, const int to_y) {
	
	if (now_x <= to_x - now_x && now_x <= to_y - now_y && now_x <= now_y)
		return now_x;
	else if (now_y <= to_x - now_x && now_y <= to_y - now_y && now_y <= now_x)
		return now_y;
					
	if (to_x - now_x <= to_y - now_y)
		return to_x - now_x;
	else
		return to_y - now_y;

	return 0;
}

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	cout << is_min_distance(x, y, w, h) << "\n";

	return 0;
}