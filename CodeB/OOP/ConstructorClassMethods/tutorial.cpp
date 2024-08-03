#include <iostream>
#include <list>

using namespace std;

/*
constructors - has the same name as class, does not have return type
*/

class YouTubeChannel {
  //attributes are private by default.
  public:
  string Name;
  string OwnerName;
  int SubscriberCount;
  list<string> PublishedVideoTitles;

  YouTubeChannel(string name, string ownerName) {
    Name = name;
    OwnerName = ownerName;
    SubscriberCount = 0;
  }

  void GetInfo() {
    cout << "Name: " << Name << endl;
    cout << "OwnerName: " << OwnerName << endl;
    cout << "SubscriberCount: " << SubscriberCount << endl;
    cout << "PublishedVideoTitles: ";
    for(string videoTitle : PublishedVideoTitles) {
      cout << videoTitle << endl;
    }
  }

};

int main () {
  YouTubeChannel ytChannel("CodeBeauty", "Saldina");
  YouTubeChannel ytChannel2("AmySings" , "Amy");
  // ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
  // ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
  // ytChannel.PublishedVideoTitles.push_back("C++ OOP for beginners");

  // ytChannel2.PublishedVideoTitles.push_back("Apples and Bananas");

  ytChannel.GetInfo();
  ytChannel2.GetInfo();
}