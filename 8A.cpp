#include <bits/stdc++.h>
using namespace std;
bool check(string extra)
{
   int len = extra.length();
   transform(extra.begin(), extra.end(), extra.begin(), ::tolower);
   for (int i = 0; i < len; i++,len--){
      if (extra.at(i) != extra.at(len - 1)){
         return false;
      }
   }
   return true;
}
int palindrome(string str, int length)
{
   int count = 0;
   string extra = "";
   for (int i = 0; i < length; i++){
      char temp = str.at(i);
      if (temp != ' '){
         extra = extra + temp;
      }
      else{
         if (check(extra))
            { count++; }
         extra = "";
      }
   }
   return count;
}
int main()
{
   string str = "nitin wants nitin for his company named nitin after nitin";
   str = str + " ";
   int length = str.length();
 cout<<"Count of palindrome words in a sentence are:"<<palindrome(str, length);

   return 0;
}
