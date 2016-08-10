#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
    
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++){
        int x, y;
        cin >> x;
        cin >> y;
        if (x%4==0||x%4==3||y%4==0||y%4==3)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    
    return 0;
}

