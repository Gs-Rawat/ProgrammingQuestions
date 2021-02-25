#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &v) {
    int n = v.size();

    for(int i = 1; i < n; i++) {
        int val = v[i];
        int j = i-1;

        while(j >= 0 && v[j] > val) {
            v[j+1] = v[j]; 
            j--;
        }
        v[j+1] = val;
    }

}


int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    insertion_sort(v);

    for(int x: v) {
        cout << x << " ";
    }cout << endl;

    return 0;
}