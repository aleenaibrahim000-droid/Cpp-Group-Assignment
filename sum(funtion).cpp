
#include <iostream>
using namespace std;
int main(){
	int marks[5]={88,76,90,61,69};
	int *p=marks;
	for(int i=0;i<5;++i)
	{
		cout<<*(marks+i)<<endl;
		cout<<p++;
	}
	
	return 0;}

