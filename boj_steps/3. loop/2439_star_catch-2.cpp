#include <iostream>
#include <string>

using namespace std;

void print_line(int empty_cnt1, int star_cnt){
	for(int cnt = 0; cnt < empty_cnt1; ++cnt){
		cout << ' ';
	}

	for(int cnt = 0; cnt < star_cnt; ++cnt){
		cout << '*';
	}
}

void print_star(int width){
	for(int i = 1; i <= width; ++i){
		int star_cnt = i;
		int empty_cnt = (width - i);

		print_line(empty_cnt, star_cnt);
		cout <<"\n";
	}
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int count;

	cin >> count;

	print_star(count);

	return 0;
}