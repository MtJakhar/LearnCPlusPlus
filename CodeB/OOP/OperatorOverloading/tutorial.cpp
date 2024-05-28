#include <iostream>
#include <string>
#include <list>

using namespace std;

/*
operator functions- defining how certain operators will behave with certain datatype.

*/
//struct are a datatype. they behave like classes except that they are by default public and that and dont have inheritance properties.

struct YouTubeChannel {
  string Name;
  int SubscriberCount;

  YouTubeChannel (string name, int subscriberCount) {
    Name = name;
    SubscriberCount = subscriberCount;
  }

  bool operator==(const YouTubeChannel& channel) const {
    return this->Name == channel.Name;
  }
};

struct Person {
  string Name;
  int Age;

  Person (string name, int age)  {
    Name = name;
    Age = age;
  }
  bool operator==(const Person& rando) const {
    return this->Name == rando.Name;
  }
};

/*
operator function syntax
return type operatorOPERATIONSYMBOL()

parameters that are non integers showed be passed by reference using the & symbol.
The reason we pass by reference, is so that we can point to the memory address of the original, rather than creating a new copy and taking up more space in memory.
*/
ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
  COUT<< "Name: " << ytChannel.Name << endl;
  COUT<< "Subscribers: " << ytChannel.SubscriberCount << endl;
  return COUT;
}

struct MyCollection {
  list<YouTubeChannel>myChannels;

  //this overloading operator takes one parameter, because it is a member function and the parent of this function will be the other parameter.
  void operator += (YouTubeChannel& channel) {
    this->myChannels.push_back(channel);
  }
  void operator -= (YouTubeChannel& channel) {
    this->myChannels.remove(channel);
  }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
  for(YouTubeChannel ytChannel: myCollection.myChannels) {
    COUT << ytChannel << endl;
  }
  return COUT;
}


int main () {
  YouTubeChannel yt1 = YouTubeChannel("codeBeauty", 75000);
  YouTubeChannel yt2 = YouTubeChannel("2nd channel", 80000);
  MyCollection myCollection;
  //this insertion operators doesnt work cause, the operator doesn't understand this datatype.
  cout << yt1 << yt2;
  /*
  how to implement the operator function
  */
 //same as cout << yt1
//  operator<<(cout, yt1);
  myCollection += yt1;
  myCollection += yt2;
  myCollection -= yt2;
  cout << myCollection;


}