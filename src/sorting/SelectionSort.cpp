#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &v) {
    int n = v.size();

    for(int i = 0; i < n-1; i++) {
        int val = v[i];
        int pos = i;
        for(int j = i+1; j < n; j++) {
            if(v[j] < val) {
                val = v[j];
                pos = j;
            }
        }
        if(pos != i) {
            swap(v[i], v[pos]);
        }
    }

}


int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    selection_sort(v);

    for(int x: v) {
        cout << x << " ";
    }cout << endl;

    return 0;
}