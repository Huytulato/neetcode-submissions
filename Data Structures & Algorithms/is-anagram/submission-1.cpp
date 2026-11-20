class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        int count1[26] = {0}, count2[26] = {0};
        for(char x:s){
            count1[x - 'a']++;
        }

        for(char x:t){
            count2[x -'a']++;
        }

        for(int i =0; i<=25; i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }
        return true;
         
    }

};
