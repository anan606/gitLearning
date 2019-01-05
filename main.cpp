#include<iostream>
using namespace std;
int gcd(int a,int b) {
	return b==0?a:gcd(b,a%b);
}
int main(int argc, char const *argv[]) {
    cout<<"Hello, World!"<<endl;
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
    return 0;
}
