// count frequency of characters in an string using hashing. 

// #include<iostream>
// using namespace std;

// int main(){
//     string s;
//     cout<<"Enter the String"<<endl;
//     cin>> s;

//     // for small or large characters hash array size will be 26 as a-z || A-Z are 26 characters.
//     // hash[0]= a, hash[1] = b...and so on. same for A-Z. 

//     int hash[256]={0}; // max ascii code value is 256
//     // int hash[26]={0}; //array of 26 elements each representing character. hash[0] = a, hash[1]=b

//     for(int i=0; i<s.size(); i++){
//         // hash[s[i] - 'a']++; //for lowerCase
//         // hash[s[i] - 'A']++; //for upperCase
//         hash[s[i]]++; //for both
        
//     }

//     /*
//         eg: s=abdb 
//         hash={0,0,0, ....upto 25}
//         hash[s[1]-"a"] = hash[b-a]=hash[98-97]=hash[1]
//         hash[1]++ is 0+1 =1
//         hash[s[3]-"a"] = hash[b-a]=hash[98-97]=hash[1]
//         hash[1]++ is 1+1 =2
//     */

//     int q;
//     cout<<"How many chracters to find?"<<endl;
//     cin>>q;
    
//     while(q--){
//         char ch;
//         cout<<"Enter the chracter you want to find"<<endl;
//         cin>>ch;
//         cout<<ch<<" appeared "<<hash[ch]<<" times in the string"<<endl;

//     }

//     return 0;
// }

////////using map

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String"<<endl;
    cin>> s;

    map<char, int> mpp;
    for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
    }
    

    

    int q;
    cout<<"How many chracters to find?"<<endl;
    cin>>q;
    
    while(q--){
        char ch;
        cout<<"Enter the chracter you want to find"<<endl;
        cin>>ch;
        cout<<ch<<" appeared "<<mpp[ch]<<" times in the string"<<endl;

    }

    return 0;
}