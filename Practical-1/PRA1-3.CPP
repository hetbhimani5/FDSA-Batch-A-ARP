#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    /*
    string sentence;
    cout<<"enter your string : "<<endl;
    getline(cin,sentence);
    string words="";
    string longest="";
    vector<string>longest_word;

    for(int i=0;i<sentence.length();i++){
        if(sentence[i]==' '){
            if(words.length()>longest.length()){
                longest=words;
                longest_word.clear();
                longest_word.push_back(longest);
            }
            else if(words.length()==longest.length()){
                longest_word.push_back(words);
            }
            words="";
        }
        else{
            words = words + sentence[i];
        }
    }
    if(words.length()>longest.length()){
        longest=words;
        longest_word.clear();
        longest_word.push_back(longest);
    }
    else if(words.length()==longest.length()){
        longest_word.push_back(words);
    }
    for(int i=0;i<longest_word.size();i++){
    cout<<"your wining words is : "<<longest_word[i]<<" letter : "<<longest.length()<<endl;
    }
    */

    string sentence, word;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string longest = "";

    stringstream ss(sentence);

    while(ss >> word)
    {
        if(word.length() > longest.length())
        {
            longest = word;
        }
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << longest.length();

    return 0;
}
