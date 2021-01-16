#include<bits/stdc++.h> 
using namespace std; 
int countMinReversals(string expr) 
{ 
    int len = expr.length(); 
	float c1=0;		//count of closing brackets
	float c2=0;		//count of opening barckets
    if (len%2) 
       return -1; 
    stack<char> s; 
    for (int i=0; i<len; i++) 
    { 
		char ch=expr[i];
		if(ch=='{')
		{
		s.push(ch);
		c2++;
		}
		else if(ch=='}' and !s.empty() and s.top()=='{')
		{
			s.pop();
			c2--;
		}
		else 
		c1++;
    } 
    c1=ceil(c1/2);
	c2=ceil(c2/2);
    return (c1+c2); 
} 
int main() 
{ 
   int n;
   cin>>n;
   while(n--)
   {
   string s;
   cin>>s;
   cout<<countMinReversals(s)<<endl;
   }
   return 0; 
} 
