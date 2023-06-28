/*
Runtime:-
3 ms
Beats
98.32%

Memory:-
7.1 MB
Beats
98.89%

Logic:-
In this problem i created two vectors of size 26 and initialize both of them with 0, now I 
incremented the value at the position of the character according to their ascii code and subtracting 
them with 97 as it is the ascii code for 'a' now by that all the character will increse the value at 
the index that will be calculated by ascii code of current character subtracted by 97 which will give
us a table of all the character in the list and we can easily compare them and check if they as same
number of characters or not which is required to check if the strings are anagrams or not.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector<int> a(26,0),b(26,0);
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-97]=a[s[i]-97]+1;
            b[t[i]-97]=b[t[i]-97]+1;
        }
        if(a==b)
            return true;
        return false;
    }
};