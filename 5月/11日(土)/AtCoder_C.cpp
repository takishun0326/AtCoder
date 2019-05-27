#include<string>
#define rep(i,x) for(i=0;i<(x);i++)
using namespace std;

int main() {

	int N, i, j;
	cin >> N;
	string S;
	int ab = 0, ba = 0, a = 0, b = 0;

	rep(i, N) {
		cin >> S;
		if (S[0] == 'B') {
			if (S[S.size() - 1] == 'A') {
				ba++;
			}
			else {
				b++;
			}
		}
		else if (S[S.size() - 1] == 'A') {
			a++;
		}
		rep(j, S.size()) {
			if (j != 0) {
				if (S[j] == 'B' && S[j - 1] == 'A') {
					ab++;
				}
			}
		}

	}
	int ans = 0;
	if (ba > 0) {
		ans += ba - 1;
		if (a > 0 && b > 0) {
			if (a > b) {
				ans = ans + b + 1;
			}
			else {
				ans = ans + a + 1;
			}
		}
		else if (a > 0 || b > 0) {
			ans += 1;
		}
	}
	else {
		if (a > 0 && b > 0) {
			if (a > b) {
				ans += b;
			}
			else {
				ans += a;
			}
		}
	}
	ans += ab;
	cout << ans;
	return 0;



}