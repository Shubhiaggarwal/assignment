#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int countVowelSubstrings(string word) {
        int n = word.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            // Skip if not vowel
            if (!isVowel(word[i])) continue;

            // Count vowels in substring starting from i
            vector<int> cnt(5, 0);
            int distinct = 0;

            for (int j = i; j < n; j++) {
                if (!isVowel(word[j])) break;  // stop at first consonant

                // Map vowel to index
                int idx;
                if (word[j] == 'a') idx = 0;
                else if (word[j] == 'e') idx = 1;
                else if (word[j] == 'i') idx = 2;
                else if (word[j] == 'o') idx = 3;
                else idx = 4;

                // Count distinct vowels
                if (cnt[idx] == 0) distinct++;
                cnt[idx]++;

                // If all 5 vowels found
                if (distinct == 5)
                    ans++;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    string word;
    cout << "Enter a string: ";
    cin >> word;

    cout << "Count of vowel substrings: " << s.countVowelSubstrings(word) << endl;
    return 0;
}
