#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    float average = sum/ n;
    cout << "The average is: " << average << endl;
    return 0;
}
