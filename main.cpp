#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int start, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << vec[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = start; i <= N; i++) {
        vec.push_back(i);
        func(i + 1, cnt + 1);
        vec.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> N >> M)) return 0;

    func(1, 0);

    return 0;
}
