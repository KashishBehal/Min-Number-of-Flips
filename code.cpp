int minFlips (string S)
{
    // your code here
       int ct1=0,ct2=0;
    for(int i=0;i<S.size();i+=2){
        if(S[i]=='0')
        ct1++;
        else
        ct2++;
    }
    int ct3=0,ct4=0;
    for(int i=1;i<S.size();i+=2){
        if(S[i]=='0')
        ct3++;
        else
        ct4++;
    }
    int ans=min(ct1,ct3)+min(ct2,ct4);
    return ans;
}
