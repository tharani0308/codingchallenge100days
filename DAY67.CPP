//DECIMAL TO BINAY 

#include <iostream>
using namespace std;
int main() {
	long long int num,bin=0,rem,product=1;
	cin >> num;    //Reading input from STDIN
 	while(num>0){
		rem=num%2;
		bin=bin+(rem*product);
		num=num/2;
		product*=10;
	}
	cout<<bin;
}

//MY VERY 1ST CONTEST 

#include <iostream>
using namespace std;
int main() {
	int num,a,b,rate,higher;
	cin >> num>>a>>b;    //Reading input from STDIN
	rate=num-a;
	higher=rate-b;
	cout <<rate<<" "<<higher;	// Writing output to STDOUT
}