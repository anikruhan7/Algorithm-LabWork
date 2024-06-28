#include <bits/stdc++.h>

using namespace std;
int count_letters(string text)
{
    int count=0;
    int n= text.length();
    for(int i = 0; i <n; i++){
        if(isalpha(text[i])){
        count++;
        }

    }
    // Return the number of letters in text
    return count;
}

 int count_words(string text)
 {
     int count=0;
    int n= text.length();
    for(int i = 0; i <n; i++){
        if(isspace(text[i])){
        count++;
        }

    }
    return count+1;
     // Return the number of words in text
}

 int count_sentences(string text)
 {
       int count=0;
    int n= text.length();
    for(int i = 0; i <n; i++){
        if(text[i] == '.' || text[i] == '!' || text[i] == '?'){
        count++;
        }

    }
    return count;
  // Return the number of sentences in text

}
int main() {
    // Write C++ code here
    string text;
     cout<<"Text:";

    getline(cin,text);

    int letters = count_letters(text);

    int words = count_words(text);

    int sentences = count_sentences(text);
   
   
    float L=(float)letters/words*100;
  
    float S=(float)sentences/words*100;

 int index = round(0.0588 * L - 0.296 * S - 15.8);

 if(index<1)
 {

    cout<<"Before Grade 1"<<endl;

 }else if(index<=16)
 {
    cout<<"Grade "<<index<<endl;
 }else
 {
    cout<<"Grade 16+"<<endl;
 }
    return 0;
}