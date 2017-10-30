#include <iostream>
#include <sstream>
using namespace std;
int main() {
    unsigned int n;
    string str;
    getline(cin, str);
    istringstream numstream(str);
    if (!(numstream >> n)) {
        cout << "An error has occuried while reading input data.";
        exit(0);
    }
    string str1;
    getline(cin, str1);
    istringstream arrstream(str1);
    int * arr = new int[n];
    for (int i = 0; i < n; i++) {
        if (!(arrstream >> arr[i])) {
            cout << "An error has occuried while reading input data.";
            exit(0);
        }
    }
    int lastindex = 0;
    for (int j = 0; j < n - 1; j++) {
        lastindex = j;
        for (int i = lastindex; i < n; i++) {
            if (arr[lastindex] > arr[i]) {
                lastindex = i;
            }
            swap(arr[lastindex], arr[j]);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
