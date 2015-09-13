#include <csetjmp>
#include <iostream>
using namespace std;
int main()
{
  jmp_buf env;
  int i;
  i = setjmp(env);
  cout<< i <<endl;

  if (i == 100) return 0;
  longjmp(env, i+1);
}
