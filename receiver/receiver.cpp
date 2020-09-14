#include "functions.h"

using namespace functions;


int main()
{
  string s1;    

  getline(cin,s1);
  
  if(checkExceptions(s1))
  {
    cout<<s1;
    return 0;
  }
  
  while(getline(cin,s1))
  {
     removeNums(s1);
     removeSpecialChar(s1);
     ToLowerChar(s1);
     trim(s1);
     removeStopWords(s1,m);
     //pushIntoMap(s1,m);
  }
  printmap(m);
  createCSV(m);
  return 0;
}
