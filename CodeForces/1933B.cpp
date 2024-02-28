#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int size; cin >> size;
        int sum= 0;
        int f1=0, f2=0, f22=0;
        for (int j = 0; j < size; j++) {
            int temp; cin >> temp;
            if (temp == 1) f1 = 1;
            if (temp % 2 == 0 && sum % 3 == 0) f2 = temp;
            if(temp == 2) f22 = 1;
            sum += temp;
        }
        if (sum % 3 == 0) cout << "0" << endl;
        else if (f1 || f2) cout << "1" << endl;
        else if (f22) cout << "1" << endl;
        else cout << "2" << endl;
    }
}