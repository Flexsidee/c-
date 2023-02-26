/*
first sort the array
then check starting from the first two if they are anagram, which is done by sorting each list then comparing 
if two elements are anagram, remove second one
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool are_anagrams(string a, string b){
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	//checking if the strings are of equal length, if not they are not anagrams
	if(a.length() != b.length()){
		return false;
	}
	
	for(int i= 0; i < a.length(); i++){
		if(a[i] != b[i]){
			return false;
		}
		return true;
	}
}


int main(){
	string str[] = {"code", "doce", "framer", "frame"};
	
	cout << are_anagrams(str[0], str[2]);
	
	return 0;
}	
