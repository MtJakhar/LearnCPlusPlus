#include <iostream>
#include <list>

using namespace std;

/*
Encapsulation - attributes should be private, and that attributes should be available through methods.

By obeying the rules of those methods we will be able to access the attributes
*/

class YouTubeChannel {
  //attributes are private by default.
  private:
  string Name;
  string OwnerName;
  int SubscriberCount;
  list<string> PublishedVideoTitles;

  public:

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

  void Subscribe() {
    SubscriberCount++;
  }
  void Unsubscribe() {
    if(SubscriberCount > 0) {
      SubscriberCount--;
    }
  }

  void PublishVideo(string title) {
    PublishedVideoTitles.push_back(title);
  }
};

int main () {
  YouTubeChannel ytChannel("CodeBeauty", "Saldina");
  YouTubeChannel ytChannel2("AmySings" , "Amy");
  //you wont be able to access these attibutes
  // ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
  // ytChannel2.PublishedVideoTitles.push_back("Apples and Bananas");
  ytChannel.Subscribe();
  ytChannel.Subscribe();
  ytChannel2.Subscribe();

  //will be able to change via methods, this is the process of encapsulation
  ytChannel.PublishVideo("Yoga for beginners");
  ytChannel2.PublishVideo("C++ for beginners");

  ytChannel.GetInfo();
  ytChannel2.GetInfo();
}
