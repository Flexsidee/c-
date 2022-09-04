#include <iostream>;
#include <algorithm>
using namespace std;

int getMin(string s){
	char f_char = '(';
	char s_char = ')';
	int no_f_char = count(s.begin(), s.end(), f_char);
	int no_s_char= count(s.begin(), s.end(), s_char);
	int l = 0;
	
	if(no_f_char > no_s_char){
		return  l = no_f_char - no_s_char;
	}else if(no_f_char < no_s_char){
		return l = no_s_char - no_f_char;
	}else{
		return l;
	}
}

int main(){
	int no1 = getMin("(()))");
	int no2 = getMin("()()");
	
	cout << no1 << endl <<  no2;
	
	return 0;
}
