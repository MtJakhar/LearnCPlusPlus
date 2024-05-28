// #include <iostream>
// #include <list>

// using namespace std;

// /*
// constructors - has the same name as class, does not have return type
// */

// class YouTubeChannel {
//   //attributes are private by default.
//   public:
//   string Name;
//   string OwnerName;
//   int SubscriberCount;
//   list<string> PublishedVideoTitles;

//   YouTubeChannel(string name, string ownerName) {
//     Name = name;
//     OwnerName = ownerName;
//     SubscriberCount = 0;
//   }

//   void GetInfo() {
//     cout << "Name: " << Name << endl;
//     cout << "OwnerName: " << OwnerName << endl;
//     cout << "SubscriberCount: " << SubscriberCount << endl;
//     cout << "PublishedVideoTitles: ";
//     for(string videoTitle : PublishedVideoTitles) {
//       cout << videoTitle << endl;
//     }
//   }

// };

// int main () {
//   YouTubeChannel ytChannel("CodeBeauty", "Saldina");
//   YouTubeChannel ytChannel2("AmySings" , "Amy");
//   // ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
//   // ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
//   // ytChannel.PublishedVideoTitles.push_back("C++ OOP for beginners");

//   // ytChannel2.PublishedVideoTitles.push_back("Apples and Bananas");

//   ytChannel.GetInfo();
//   ytChannel2.GetInfo();
// }

#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
  public:
  string Name;
  string OwnerName;
  int SubscriberCount = 0;
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
    for(string title: PublishedVideoTitles) {
      cout << title << endl;
    }
  }
};

int main () {
  YouTubeChannel ytChannel("CodeBeauty", "Saldina");
  YouTubeChannel ytChannelJoe("joe rogan", "sdfasdf");
  ytChannel.PublishedVideoTitles.push_back("Apples and Bananas");
  ytChannel.PublishedVideoTitles.push_back("Apples and strawberries");

  ytChannel.GetInfo();
  ytChannelJoe.GetInfo();

}