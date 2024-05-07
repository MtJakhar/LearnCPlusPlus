#include <iostream>
#include <queue>

using namespace std;

void Menu () {
  cout << "Create a Todo List!!" << endl;
  cout << "to add a Todo type A" << endl;
  cout << "to deleter the first item type D" << endl;
  cout << "to show the list type s" << endl;
  cout << "to exit application type Q" << endl;
}

void printQueue(queue<string> queue) {
  while(!queue.empty()) {
    cout << queue.front() << " ";
    queue.pop();
  }
  cout << endl;
};

int main () {
  char userInput{};
  queue <string> todoList;
  string newTask;

  while(tolower(userInput) !='q') {
    Menu();
    cin >> userInput;

    switch (tolower(userInput))
    {
    case 'a':
      cout << "add a new task: \n";
      cin >> newTask;
      todoList.push(newTask);
      break;
    case 'd':
      cout << "first task completed/deleted.\n";
      todoList.pop();
      break;
    case 's':
      printQueue(todoList);
      break;
    case 'q':
      cout << "You have exited the application\n";
      break;
    
    default:
      cout << "ERROR-- please try again\n";
      break;
    }
  }
}