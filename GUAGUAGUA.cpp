#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int counter;


bool find_one=false;



int main(){
	
	int sample_number;
	cin >> sample_number;
	for (int i=0;i<sample_number;i++){
		cin >> n >>m >> k ;
		Deal_with_line(n,m,k);
	}


	}	
}

void check_solo_palindromes(req){
	for (i=1;i<=total_length;i++){
		if (req[i]!=req[tatal_length-i+1]){
			return false;
		}
	}
	return true;

}

void check_palindromes(req){
	total_length=x;
	for (j=total_length;j>0;j--)
		for (i=1;i<j;i++){
			gotcha=req.substr(i,j);
			check_solo_palindromes(gotcha);
			if (check_solo_palindromes==true){
				total=total+1;
			}
			
		} 
	return total;
}



int Deal_with_line(n1,m1,k1,i){	
	int a[100];
	find_one=false;
	while (i < m){
		int ss = 1;
		while (ss<i){
			int j = 1;
			while (j < m){
				a[j]=ss;
				j += 1;
			}
			string atostring;
			for (i=1;i<m;i++){
				atostring+= string(a[i]);
			}
			check_palindromes(atostring);
			ss = ss + 1;
		}
		i  =  i+1;
	}
}