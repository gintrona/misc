//-std=c++0x
#include <iostream>
using namespace std;

//base case
template<typename T>
T r_cout(T v) {
  cout<<v<<endl;
}

//recursive call
template<typename T, typename... Args>
T r_cout(T first, T second){
	if(first<second){  
		cout<<first<<endl;
		r_cout(first+1,second);
  	}else{
		r_cout(second);
	}

}
int main()
{
r_cout(1,100);//starts at 1, ends at 100
return 0;
}
