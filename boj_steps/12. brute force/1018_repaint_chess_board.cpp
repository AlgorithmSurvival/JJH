#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>

using namespace std;

static array<string, 8> White_first = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

static array<string, 8> Black_first = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

int count_repaint(const vector<string>& wood_board, const int idx_h, const int idx_w, char color) {
	int cnt = 0;

	switch(color) {
	case 'W': 
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				if (wood_board[i + idx_h][j + idx_w] != White_first[i][j]) {
					++cnt;
				}
			} 
		}
		break;

	case 'B':
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				if (wood_board[idx_h + i][idx_w + j] != Black_first[i][j]) {
					++cnt;
				}
			} 
		}
		break;
	}

	return cnt;
}


int get_repaint_count(const vector<string>& wood_board) {
	int min_cnt = 64;

	for (int i = 0; i <= wood_board.size() - 8; ++i) {
		for (int j = 0; j <= wood_board[i].size() - 8; ++j) {
			int temp_w = count_repaint(wood_board, i, j, 'W');
			int temp_b = count_repaint(wood_board, i, j, 'B');
			int temp = min(temp_w, temp_b);
			min_cnt = min(temp, min_cnt);
		}
	}

	return min_cnt;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int HEIGHT, WIDTH;
	cin >> HEIGHT >> WIDTH;

	vector<string> wood_board(HEIGHT);

	for (int i = 0; i < HEIGHT; ++i) {
			cin >> wood_board[i];
	}

	cout << get_repaint_count(wood_board) << "\n";

	return 0;
}