#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int size; cin >> size;
        int sum= 0;
        for (int j = 0; j < size; j++) {
            int temp; cin >> temp;
            temp = abs(temp);
            sum += temp;
        }
        cout << sum << endl;
    }
}