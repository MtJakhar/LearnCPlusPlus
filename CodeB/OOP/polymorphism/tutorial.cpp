#include <iostream>
#include <list>

using namespace std;

/*
polymorphism- describes the ability of an object to have multiple forms.

two or more objects that inherit from the same class, those objects can have a method of the same name but have different implementations.

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
  int ContentQuality;

  public:

  YouTubeChannel(string name, string ownerName) {
    Name = name;
    OwnerName = ownerName;
    SubscriberCount = 0;
    ContentQuality = 0;
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

  void CheckAnalytics() {
    if(ContentQuality < 5) {
      cout << Name << " has bad quality content" << endl;
    } else {
      cout << Name << " has great quality content" << endl;
    }
  }
};

class CookingYouTubeChannel:public YouTubeChannel {

  public:
  CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {}
  void Practice() {
    //ownername is available due to it being protected rather than private.
    cout << OwnerName <<"Practicing Cooking, learning new recipes, experimenting with spices..." << endl;
    ContentQuality++;
  }
};

class SingerYouTubeChannel:public YouTubeChannel {

  public:
  SingerYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {}

  //this method is the same as the cooking channel yet a different implementation. this is polymorphism.
  void Practice() {
    //ownername is available due to it being protected rather than private.
    cout << OwnerName <<"Practicing singing, learning new notes, and dancing..." << endl;
    ContentQuality++;
  }
};

int main () {
  YouTubeChannel ytChannel("CodeBeauty", "Saldina");
  YouTubeChannel ytChannel2("AmySings" , "Amy");
  CookingYouTubeChannel cookingChannel("Amy's Kitchen", "Amy");
  SingerYouTubeChannel singingChannel("John's Music", "John Star");
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
  //same method different outcome.
  singingChannel.Practice();
  singingChannel.Practice();
  singingChannel.Practice();
  singingChannel.Practice();

  //create pointers with type YouTubeChannel, and get the address of the value
  // YouTubeChannel *yt1 = &cookingChannel;
  // YouTubeChannel *yt2 = &cookingChannel;

  // yt1->CheckAnalytics();
  // yt2->CheckAnalytics();
  singingChannel.CheckAnalytics();
  cookingChannel.CheckAnalytics();


}