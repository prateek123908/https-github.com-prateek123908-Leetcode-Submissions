class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
        return true;
        return false;
    }
    string reverseVowels(string s) {
        int st=0;
        int end=s.length()-1;
        while(st<end){
            while(!isVowel(s[st]) && st<end){
                st++;
            }
            while(!isVowel(s[end]) && st<end){
                end--;
            }
            swap(s[st],s[end]);
            st++;
            end--;
        }
        return s;
    }
};