#include <iostream>
using namespace std;

int main()
{
    string s = "atharva";

    int freq[26];
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    char ans ='a';
    int maxf =0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxf){
            maxf =freq[i];
            ans = i + 'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;

    // for(int i=0;i<26;i++){
    //     if(freq[i] != 0){
    //         char answer = 'a'+i;
    //         cout<<answer<<" "<<freq[i]<<" ,";
    //     }
    // }
    return 0;
}
