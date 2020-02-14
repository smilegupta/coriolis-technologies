#include<bits/stdc++.h>
using namespace std;
void reverse(char* begin, char* end){
	char temp;
	while(begin<end)
	{
		temp=*begin;
		*begin++=*end;
		*end--=temp;
	}
}
void reverseword (char* s)
{
	char* word_begin=s;
	char* temp=s;
	while(*temp)
	{
		temp++;
		if (*temp == '\0') { 
            reverse(word_begin, temp - 1); 
        } 
        else if (*temp == ' ') { 
            reverse(word_begin, temp - 1); 
            word_begin = temp + 1; 
        } 
    } 
    reverse(s, temp - 1); 
}
	
int main()
{
	char s[100];
	cin.getline(s,100);
	reverseword(s);	
	for(int i=0; s[i]!='\0';i++)
	cout<<s[i];
	
}
