#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int low, int high) {
    int pivot = v[high];
    int i = low-1;
    for(int j = low; j < high; j++) {
        if(v[j] < pivot) {
           swap(v[++i], v[j]);
        }
    }
    swap(v[++i], v[high]);
    return i;
}

void quick_sort(vector<int> &v, int low, int high) {
    if (low < high) {
        int pivot = partition(v, low, high);
        quick_sort(v, low, pivot-1);
        quick_sort(v, pivot+1, high);
    }
}


int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    quick_sort(v, 0, n-1);

    for(int x: v) {
        cout << x << " ";
    }cout << endl;

    return 0;
}