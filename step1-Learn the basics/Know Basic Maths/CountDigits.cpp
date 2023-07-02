class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int n = N;
        int count = 0;
        while(n!=0)
        {
            int unit = n%10;
            if(unit!=0 && N%unit == 0)
                count++;
            n = n/10;
        }
        
        return count;
    }
};