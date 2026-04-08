class Solution {
public:
    int minOperations(string s){
        int n = s.length();
        int changes1 = 0; // 0101
        int changes2 = 0; // 1010
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (s[i] != '0') changes1++; // ถ้าไม่ใช่ 0 
                if (s[i] != '1') changes2++; // ถ้าไม่ใช่ 1 
            }
            else {
                if (s[i] != '1') changes1++; 
                if (s[i] != '0') changes2++; 
            }
        }
    return min(changes1, changes2); 
    }
};
