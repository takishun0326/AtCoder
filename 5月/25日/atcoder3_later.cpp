#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int L[M], R[M];
	for (int i = 0; i < M; i++) {
		cin >> L[i] >> R[i];
	}
	int LL = L[0], RR = R[0];
	for (int i = 0; i < M; i++) {
		LL = max(LL, L[i]);
		RR = min(RR, R[i]);
	}
	if (LL > RR) {
		cout << 0;
	}
	else {
		cout << RR - LL + 1;
	}
	return 0;

}