class Solution {
private:
 bool checkequal(int arr[26],int brr[26]){
    for(int i=0;i<26;i++){
        if(arr[i]!=brr[i]){
            return 0   ;
        }
    }
    return 1;
}
public:

    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
          
        }
        int i=0;
        int count2[26]={0};
        int windowsize=s1.length();
        while(i<windowsize && i<s2.length()){
              int index=s2[i]-'a';
             count2[index]++; 
            i++;
        }
        if(checkequal(count1,count2)) 
            return 1;
        while(i<s2.length()){
            char newchar=s2[i];
            int index=newchar-'a';
            count2[index]++;
            char oldchar=s2[i-windowsize];
            index=oldchar-'a';
            count2[index]--;
            i++;
             if(checkequal(count1,count2))
{
    return 1;
}
        }
        return 0;
    }
};