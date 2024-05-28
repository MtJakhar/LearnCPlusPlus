#include <iostream>
#include <list>

using namespace std;

/*
Inheritance - is passing on the attributes and methods of a "parent" class to its "children". the parent and child classes are know as base and derived class formally.
*/

class YouTubeChannel {
  //attributes are private by default.
  private:
  string Name;
  // string OwnerName;
  int SubscriberCount;
  list<string> PublishedVideoTitles;

  protected:
  //in order to keep attributes private while allowing them to be available to children classes you must use protected
  string OwnerName;

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

class CookingYouTubeChannel:public YouTubeChannel {

  public:
  CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {}
  void Practice() {
    //ownername is available due to it being protected rather than private.
    cout << OwnerName <<"Practicing Cooking, learning new recipes, experimenting with spices..." << endl;
  }
};

int main () {
  YouTubeChannel ytChannel("CodeBeauty", "Saldina");
  YouTubeChannel ytChannel2("AmySings" , "Amy");
  CookingYouTubeChannel cookingChannel("Amy's Kitchen", "Amy");
  cookingChannel.Subscribe();
  cookingChannel.PublishVideo("How to Cook Steak");
  cookingChannel.PublishVideo("How to Apple Pie");

  ytChannel.Subscribe();
  ytChannel.Subscribe();
  ytChannel2.Subscribe();

  ytChannel.PublishVideo("Yoga for beginners");
  ytChannel2.PublishVideo("C++ for beginners");

  ytChannel.GetInfo();
  ytChannel2.GetInfo();

  cookingChannel.Practice();
  //this practice method is not available for the parent method.
  // ytChannel.Practice();
}

