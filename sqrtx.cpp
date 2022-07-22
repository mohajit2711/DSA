class Solution {
public:
    int mySqrt(int x) {
            long start = 0;
            long end = x;
            while(start + 1 < end) {
                long center = start + (end - start) / 2;
                if(center*center == x)
                    return center;
                else if(center * center < x)
                    start = center;
                else
                    end = center;
            }
            if(end * end == x) return end;
        return start;
    }
};
