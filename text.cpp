#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) {

    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << vec[i] << " ";
        }
        cout << '\n';
        return;
    }


    for (int i = 1; i <= N; i++) {
    
        if (!vec.empty() && vec.back() >= i) continue;

        vec.push_back(i);
        func(cnt + 1);
        vec.pop_back(); 
    }
}

int main() {
    cin >> N >> M;
    func(0);
}
