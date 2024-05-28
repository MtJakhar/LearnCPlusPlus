// #include <iostream>
// #include <list>

// using namespace std;
// //class is a user defined datatype
// /*class is like a car, while object would be a subset of a car like a volo, ford, ect*/

// class YouTubeChannel {
//   //attributes are private by default.
//   public:
//   string Name;
//   string OwnerName;
//   int SubscriberCount;
//   list<string> PublishedVideoTitles;

// };

// int main () {
//   YouTubeChannel ytChannel;
//   ytChannel.Name = "CodeBeauty";
//   ytChannel.OwnerName = "Saldina";
//   ytChannel.SubscriberCount = 1500;
//   ytChannel.PublishedVideoTitles = {"C++ for beginners Video1", "HTML & CSS Video1", "C+++ OOP Video1"};

//   cout << "Name: " << ytChannel.Name << endl;
//   cout << "OwnerName: " << ytChannel.OwnerName << endl;
//   cout << "SubscriberCount: " << ytChannel.SubscriberCount << endl;
//   cout << "PublishedVideoTitles: ";
//   for(string videoTitle : ytChannel.PublishedVideoTitles) {
//     cout << videoTitle << endl;
//   }
// }
#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
  public:
  string Name;
  string OwnerName;
  int SubscriberCount;
  list<string> PublishedVideoTitles;
};

int main () {
  YouTubeChannel ytChannel;
  ytChannel.Name = "Aayra's Playground";
  ytChannel.OwnerName = "Aayra";
  ytChannel.SubscriberCount = 1500;
  ytChannel.PublishedVideoTitles = { "first", "second", "thrid" };

  cout << "Name: " << ytChannel.Name << endl;
  cout << "OwnerName: " << ytChannel.OwnerName << endl;
  cout << "SubscriberCount " << ytChannel.SubscriberCount << endl;
  cout << "Published videos";
  for(string title : ytChannel.PublishedVideoTitles) {
    cout << title << endl; 
  }
}