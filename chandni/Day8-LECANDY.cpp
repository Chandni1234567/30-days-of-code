#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n; long long c;
	    long long sum = 0;
	    cin >> n >> c;
	    while (n--) {
	        long long input;
	        cin >> input;
	        sum +=input;
	    }
	    if (sum > c) {
	        cout << "No\n";
	    } else {
	        cout << "Yes\n";
	    }
	}
	return 0;
}
