#include <iostream>
#include <list>

using namespace std;

/*
  container - a storage that holds data

  list container does not provide direct access to elements by index like some other containers such as std::vector. This is because std::list is not based on contiguous memory, so direct indexing would require traversing the list from the beginning, resulting in linear time complexity.

  Linked List Implementation: std::list is implemented as a doubly linked list, where each element points to the next and previous elements in the list.

  Dynamic Memory Management: Since it's a linked list, memory is allocated dynamically for each element, allowing for efficient insertions and deletions at any position.

  Iterator Stability: Iterators to elements in a list remain valid even after insertions or deletions, unless the element itself is erased.
  Slow Random Access: Accessing elements by index in a std::list is slower compared to vectors because it requires traversing the list from the beginning or end.

  Higher Memory Overhead: Each element in the list requires additional memory for pointers to the next and previous elements.

*/

// int main () {
//   list<int> myList;
//   myList.push_back(10);
//   myList.push_back(20);
//   myList.push_back(30);
//   myList.push_back(15);
//   // myList.erase(element to erase);


//   //iterators
//   for(int element : myList) {
//     cout << element << endl;
//   }
//   //or
//   // for(list<int>::iterator it = myList.begin(); it != myList.end(); it ++) {
//   //   cout << *it << endl;
//   // }
  


// }

void displayRatings(const list<int>& playersRatings) {
  for(list<int>::const_iterator it = playersRatings.begin(); it != playersRatings.end(); it++) {
    cout << "Players Rating: " << *it << endl;
  }
}

void insertPlayerIntoOrderList(int newPlayerRating, list<int>& playersByRating) {
  for(list<int>::iterator it = playersByRating.begin(); it != playersByRating.end(); it++) {
    if(*it > newPlayerRating) {
      playersByRating.insert(it, newPlayerRating);
      return;
    }
  }
  playersByRating.push_back(newPlayerRating);
}

int main () {
  list<int> allPlayers = {2,9,6,7,3,1,4,8,2,2,9};

  list<int> beginners; //rating 1-5
  list<int> pros; //rating 6-10

  for(list<int>::iterator it = allPlayers.begin(); it != allPlayers.end(); it++) {
    int rating = *it;
    if(rating >= 1 && rating <= 5) {
      beginners.push_back(rating);
    }
    else if(rating >= 6 && rating <= 10) {
      pros.push_back(rating);
    }
  }

  cout << "beginners " << endl;
  displayRatings(beginners);
}

/*
  METHODS IN LIST
  Iterators:
  begin(): Returns an iterator to the beginning of the list.
  end(): Returns an iterator to the end of the list.
  rbegin(): Returns a reverse iterator to the beginning of the reversed list.
  rend(): Returns a reverse iterator to the end of the reversed list.

  Capacity:
  empty(): Checks whether the list is empty.
  size(): Returns the number of elements in the list.

  Element Access:
  front(): Accesses the first element in the list.
  back(): Accesses the last element in the list.

  Modifiers:
  push_front(const T& value): Adds an element to the beginning of the list.
  pop_front(): Removes the first element of the list.
  push_back(const T& value): Adds an element to the end of the list.
  pop_back(): Removes the last element of the list.
  insert(iterator pos, const T& value): Inserts an element before the specified position.
  erase(iterator pos): Removes the element at the specified position.
  clear(): Removes all elements from the list.
  emplace_front(Args&&... args): Constructs an element at the beginning of the list.
  emplace_back(Args&&... args): Constructs an element at the end of the list.
  emplace(iterator pos, Args&&... args): Constructs an element before the specified position.

  Operations:
  splice(iterator pos, list& other): Transfers elements from another list into the list.
  remove(const T& value): Removes all elements equal to a specified value.
  remove_if(UnaryPredicate pred): Removes all elements for which a specified predicate is true.
  reverse(): Reverses the order of elements in the list.
  sort(): Sorts the elements in the list.
  merge(list& other): Merges another list into the list, assuming both lists are sorted.
  unique(): Removes consecutive duplicate elements from the list.
*/