#include <bits/stdc++.h>
using namespace std;
int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int st = h1 * 60 + m1;
    int ed = h2 * 60 + m2;

    int duration;
    if (st < ed) {
        duration = ed - st;
    } else {
        duration = (24 * 60 - st) + ed;
    }

    int hours = duration / 60;
    int minutes = duration % 60;
    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
    return 0;
}
