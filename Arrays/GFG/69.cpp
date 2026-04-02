//https://leetcode.com/problems/happy-number/
class Solution {
public:
    int getnext(int n)
    {
        int sum=0;
        while(n>0)
        {
            int d=n%10;
            n=n/10;
            sum+=d*d;
        }
        return sum;
    }
    //Method 1: part
    /*int sumsq(int x)
    {
        int sum=0;
        while(x!=0)
        {
            //rem=x%10;
            //x=x/10
            //sum+=x*x
            sum+=pow(x%10,2);
            x=x/10;
            
        }
        return sum;
    }*/
    bool isHappy(int n) {
       
        //Method 1:Hash table-------------Time complexity??
       /*set<int> s;
        while(n!=1 && s.find(n)==s.end())
        {
            s.insert(n);
            n=sumsq(n);
        }
        return n==1;*///if it will be n=1 then it's a happy number otherwise 'while'
        //statement ended because of repetition of element which indicates endless loop
        //and that n will never be =1
        
        //Method 2: Floyd's Cycle-Finding Algorithm -----TC???
        int slowrunner=n;
        int fastrunner=getnext(n);
        while(fastrunner!=1 && slowrunner!=fastrunner)
        {
            slowrunner=getnext(slowrunner);
            fastrunner=getnext(getnext(fastrunner));//TLE!! when fastrunner move 1 step?
        }
        return fastrunner==1;
       
            
            
        
    }
};
