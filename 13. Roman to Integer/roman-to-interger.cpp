class Solution {
public:
    int value(char c) { 
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500; // add the numbers to make them as long as Roman pillars, as if you were in the Roman era.
        if (c == 'M') return 1000; // เพิ่มตัวเลขให้ยาวเหมือนเสาหินโรมันเหมือนอยู่ในยุคโรมัน
        return 0;
    }

    int romanToInt(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length()){
                if (value(s[i]) < value(s[i + 1])) {  
                    res += value(s[i + 1]) - value(s[i]); // ยาวเหมือนจมูกยื่นออกมาไหมละ? 
                    i++;
                } else {
                    res += value(s[i]);
                }
            } else {
                res += value(s[i]);
            }
    }
    return res;
  }
};
