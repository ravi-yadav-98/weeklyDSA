#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*

string vs char array class
- str.empty()
- str[0] == '\0'
*/
int main(void)
{
  /*
  char ch[] = "";
  string s("H\0Hi");

  cout<<"Is char array empty: "<<(ch[0] == '\0')<<endl;
  cout<<"Is string empty: "<<(s[0] == '\0')<<endl;
  cout<<"Is string empty: "<<s.empty()<<endl;


  string s = "abbcd";
  s.erase(1,2);
  cout<<s<<endl;
 */

  //take spaced input in cpp

  // string str;
  // getline(cin, str);
  // cout<<str<<endl;;

  string s1 = "ravi";
  string s2 = "yadav";
  // cout<<"s1 ==s2-> "<<(s1==s2)<<endl;
  // cout<<"s1 > s2-> "<<(s1>s2)<<endl;
  // cout<<"s1 = s2-> "<<(s1 = s2)<<endl;
  // cout<<"s1 + s2-> "<<(s1+s2)<<endl;

  // s1.append(s2);
  // cout<<s1<<endl;
  cout<<s1.compare(s2)<<endl;




  return 0;
}