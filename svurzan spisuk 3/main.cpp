#include <iostream>
#include <list>
using namespace std;
void nums(int a,int b)
{
 list<int> numbers;
 numbers.push_front(a);
 numbers.push_front(6);
 numbers.push_front(7);
 numbers.push_front(8);
 numbers.push_front(9);
 numbers.push_front(b);
 list<int>::iterator it;
 it=numbers.begin();
 numbers.insert(it,6);
 while(it != numbers.end())
 {
     cout<<*it<<"-";
     it++;
 }
}
  int main()
 {
  nums(5,10);
 }
