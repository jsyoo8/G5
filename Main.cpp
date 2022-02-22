#include <cstdio>
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

// #define USE_TXT

void cppReady() {
#if defined(USE_TXT)
    // ios_base::sync_with_stdio(false); cin.tie(NULL); freopen("TestCases.txt", "r", stdin); freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL); freopen("TestCases.txt", "r", stdin);
#else
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#endif
}

int main(void) {
    cppReady();
    unsigned int tCnt;
    cin >> tCnt;

    for (unsigned int i = 0; i < tCnt; i++) {
        unsigned int x, y;
        cin >> x;
        cin >> y;
        unsigned int diff = y - x;
        unsigned int result;
        unsigned int factor = (unsigned int)sqrt((double)diff);
        for (unsigned int j = factor; j < factor + 2; j++) {
            if (diff <= j * (j + 1)) {
                if (diff > j * j) {
                    result = j * 2;
                }
                else {
                    result = j * 2 - 1;
                }
                cout << result << '\n';
                break;
            }
        }
    }

    return 0;
}