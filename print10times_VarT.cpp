//Using variadic templates to print the elems of a list
#include <iostream>
using namespace std;

template<typename T>
T r_cout(T v) {
  cout<<v<<endl;
}

template<typename T, typename... Args>
T r_cout(T first, Args... args) {
  cout<<first<<endl;
  r_cout(args...); 
}
int main()
{
r_cout(1,2,3,4,5,6,7,8,9,10);

}
