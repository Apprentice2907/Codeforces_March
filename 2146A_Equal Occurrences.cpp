// My logic but chatGPT coded 

#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& h) {
    stack<int> st;
    int maxArea = 0;
    int n = h.size();

    for (int i = 0; i <= n; i++) {
        int currHeight = (i == n ? 0 : h[i]);

        while (!st.empty() && currHeight < h[st.top()]) {
            int height = h[st.top()];
            st.pop();

            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;

            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> freq;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;
            freq.push_back(j - i);
            i = j;
        }

        sort(freq.begin(), freq.end());

        cout << largestRectangleArea(freq) << "\n";
    }
    return 0;
}