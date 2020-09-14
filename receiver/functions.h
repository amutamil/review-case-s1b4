#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<cctype>
#include<iterator>
#include<algorithm>
#include<fstream>
#include<sstream>
#include "stopwords.h"
using namespace std;
using namespace stopwords;

namespace functions
{ unordered_map<string, int> m;
  bool checkExceptions(string s)
  {
  string arr[3]={"filename not passed as argument","file cannot be opened","file is empty"};
  for(unsigned int i=0;i<3;i++)
  {
    if(s==arr[i])
      return true;
  }
  return false;
  }
  
  void removeNums(string& s1)
  {
    s1.erase(remove_if(s1.begin(), s1.end(), ::iswdigit), s1.end());
  }
    
  void removeSpecialChar(string& s1)
  {
     s1.erase(remove_if(s1.begin(), s1.end(), ::iswpunct), s1.end());
  }
  
  void ToLowerChar(string& s1)
  {
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  }
 
void trim(string& s1)
{
	const string WHITESPACE = " \n\r\t\f\v";
	size_t start = s1.find_first_not_of(WHITESPACE);
	if (start != string::npos)
		s1=s1.substr(start);
	size_t end = s.find_last_not_of(WHITESPACE);
	if(end != string::npos) 
		s=s.substr(0, end + 1);
}
 
  void pushIntoMap(string& s1, unordered_map<string, int>& m)
    {
        string word=s1;
        
            if (m.find(word) == m.end())
                m.insert({ word, 1 });
            else
            {
                unordered_map<string, int>::iterator it;
                it = m.find(word);
                it->second += 1;
            }
      
        
    }

  
  void removeStopWords(string &s1,unordered_map<string, int>& m)
  {
        string word;
        stringstream sentence(s1);
        while(getline(sentence,word,' '))
        {
           if (stopwords::stopword.find(word) == stopwords::stopword.end() )
                pushIntoMap(word, m);
        }
  }
  
  
  void printmap(unordered_map<string, int>& m)
  {
   unordered_map<string, int>::iterator itr;
   for (auto itr = m.begin(); itr != m.end(); ++itr) 
      {
        cout << itr->first
            << '\t' << itr->second << '\n';
      }
  }
  
}
