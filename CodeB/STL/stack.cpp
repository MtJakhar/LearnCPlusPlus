#include <iostream>
#include <stack>
using namespace std;

void printStackElements(stack<int> stack) {
  while(!stack.empty()) {
    cout << stack.top() << endl;
    stack.pop();
  }

}

/*
stack-
  -use LIFO last in first out.
  -also called FILO- first in last out.
  -examples are forward and backward navigation on websites

*/

int main () {
  //empty,size,push,pop,top
  stack <int>numbersStack;
  numbersStack.push(1);
  numbersStack.push(2);
  numbersStack.push(3);

  printStackElements(numbersStack);
  
  // if(numbersStack.empty()) {
  //   cout << "Stack is empty" << endl;
  // } else {
  //   cout << "stack is not empty" << endl;
  // }
  // cout << "stack size is " << numbersStack.size();
}