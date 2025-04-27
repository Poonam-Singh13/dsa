#include<iostream>
#include<cstring>
#include<string>
using namespace std;
bool isAnagrams(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"not a anagram \n";
        return false;
    }
    int count[26]={0};
    for(int i=0;i<str1.length();i++){
        int idx=str1[i]-'a';
        count[idx]++;
    }
    for(int i=0;i<str2.length();i++){
        int idx=str2[i]-'a';
        if(count[idx]==0){
            return false;
        }
        count[idx]--;

    }cout<<"is a anagram \n";
    return true;

}
bool isPalindrome(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(word[st++]!=word[end--]){
            cout<<"not a palindrome";
            return false;
        }
        cout<<"is a palindrome";
        return true;
    }
}
void reverseString(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}
void toLowerCase(char word[],int n){
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='a'&&ch<='z'){
            continue;
        }else{
            word[i]=ch-'A'+'a';
        }
    }
}
int main(){
    string str1="anagram";
    string str2="naam";
    isAnagrams(str1,str2);
   // char word[100];
   // cout<<"enter the word "<<endl;

    //cin.getline(word,100,'*');
   // isPalindrome(word,strlen(word));
    //toLowerCase(word,strlen(word));
   // cout<<word<<endl;

}
