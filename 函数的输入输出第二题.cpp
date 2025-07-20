#include<iostream>
#include<vector>
using namespace std;
string bigword(const string&word){
    string a=word;
    if(!a.empty()){ if(a[0]>='a'&&a[0]<='z'){a[0]=a[0]-32;}}
    return a;}
void bigarr(vector<string>&words){
    for(string&word:words){word=bigword(word);}}
int main(){
    vector<string>words; 
	cout<<"ÇëÊäÈë:";string input;getline(cin,input);string word;
    for(char c:input){
        if(c==' '){
        	if(!word.empty()){words.push_back(word);word.clear();}}
			else{word+=c;}} 
    if(!word.empty()){words.push_back(word);} bigarr(words);
    for(const string&word:words){cout<<word<<endl;}return 0;}
