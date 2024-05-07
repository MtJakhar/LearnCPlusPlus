#include <iostream>
#include <queue>

using namespace std;
/*
  queue-
    -FIFO - first in first out 
*/

void printQueue(queue<int> queue) {
  while(!queue.empty()) {
    cout << queue.front() << " ";
    queue.pop();
  }
  cout << endl;
};

int main () {
  queue <int> myQueue;
  myQueue.push(1);
  myQueue.push(2);
  myQueue.push(3);

  cout << "size is " << myQueue.size() << endl;
  cout << "first element is " << myQueue.front() << endl;
  cout << "last element is " << myQueue.back() << endl;

  cout << "My queue: " << endl;
  printQueue(myQueue);
}