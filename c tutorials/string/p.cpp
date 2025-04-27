


#include<iostream>
#include<cstring>
using namespace std;
 void toUpper(char words[],int n){
    for(int i=0;i<n;i++){
        char ch=words[i];
        if(ch>='A'&&ch<='Z'){
            continue;
        }else{
            words[i]=ch-'a'+'A';
        }

    }
}
int main(){
    char ch1='a';
    char ch2='P';
    int pos=ch2-'A';
    cout<<pos<<endl;
    cout<<(int) ch1<<endl;

    // creation & output in CHAR ARRAY
    char str2[]={'a','b','c','d','\0'};
    cout<<str2<<endl;
    char str1[]="apna collage";
    cout<<str1<<endl;
    char work[50]={'c','e','d','e','\0'};
    cout<<strlen (work)<<endl;     
    
    //Input 

    char word[10];
    cin>>word;            // Poonam Singh --->poonam
    cout<<"your word is "<<word<<endl;
    
    // cin.getline ---> so that words after the whitespace can alse be read
    char sentence[50];
    cin.getline(sentence,50,'*');
    cout<<sentence<<endl;

    char words[]="ApPle";
    toUpper(words,strlen(words));

    cout<<words<<endl;
    

}
