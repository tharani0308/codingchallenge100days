//PRIZEPOOL

#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	while(num--){
		int x,y;
		cin>>x>>y;
		cout<<(x*10)+(y*90)<<endl;
	}
	return 0;
}

//EXTRACT MAXIMUM 
int extractMaximum(string s){
    if(s.size() == 0)
        return 0;
    
    int i, j, n, result;
    i = 0;
    n = s.size();
    result = 0;
    
    while(i < n){
        while(i < n && !isdigit(s[i]))
            i++;
        
        int num;
        num = 0;
        while(i< n && isdigit(s[i])){
            num = num * 10 + (s[i] - '0');
            i++;
        }
        
        if(num > result)
            result = num;
    }
    
    return result;
}

int main()
 {
	//code
	int t;
	cin>>t;
	
	for(int l=0; l<t; l++){
	    string s;
	    cin>>s;
	    
	    cout<<extractMaximum(s)<<endl;
	}
	return 0;
}