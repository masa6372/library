//AOJ ALDS1_5_Bの解答

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef int ll;
const ll INF = 1145141919;
ll ans = 0;
vector<ll> s;

void merge(vector<ll> &A, ll left, ll mid, ll right) {
    ll n1 = mid - left;
    ll n2 = right - mid;
    //generate L[0..n1], R[0..n2]
    vector<ll> L(n1+1), R(n2+1);
    for(int i=0; i<n1; i++) {
        L[i] = A[left + i];
    }
    for(int i=0; i<n2; i++) {
        R[i] = A[mid + i];
    }
    L[n1] = INF;
    R[n2] = INF;
    ll i = 0, j = 0;
    for(int k= left; k<right; k++) {
        ans++;
        if(L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(vector<ll> &A, ll left, ll right) {
    if(left+1 < right) {
        ll mid = (left+right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
    mergeSort(s, 0, n);
    for(int i=0; i<n; i++) {
        if(i != n-1)cout << s[i] << " ";
        else cout << s[i] << endl;
    }
    cout << ans << endl;
}
