class Solution {
public:
bool isfreqSame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }
        int WindSize=s1.length();
        for(int i=0;i<s2.length();i++){
             int WindIdx=0;
             int idx=i;
             int Windfreq[26]={0};
        
         while( WindIdx<WindSize && idx<s2.length()){
            Windfreq[s2[idx]-'a']++;
            idx++;
            WindIdx++;
        }
          if(isfreqSame(freq,Windfreq)){
            return true;
        }
     }
     return false;
    }
};