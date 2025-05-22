class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        int p1=0,p2=1,c=0;
        for(int i=2;i<=n;i++){
            c=p1+p2;
            p1=p2;
            p2=c;
        }
        return c;
    }
};