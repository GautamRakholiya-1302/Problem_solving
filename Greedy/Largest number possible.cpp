 string findLargest(int N, int S){
       string s;
        if(S==0 && N == 1) return "0";
        if(S==0 && N>1) return "-1";
        if(N*9 < S) return "-1";
        while(S>0){
            int i = S >= 9 ? 9 : S;
            s += i + '0';
            S-=i;
        }
        while(s.size() != N){
            s+='0';
        }
        
        return s;
    }
