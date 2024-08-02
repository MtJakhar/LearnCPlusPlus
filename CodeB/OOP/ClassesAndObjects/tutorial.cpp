#include <iostream>
#include <list>
#include <string>

using namespace std;

class YoutubeChannel {
public:
  string Name;
  string OwnerName;
  int SubscriberCount;
  list<string>PublishedVideos;
};

int main () {
  YoutubeChannel ytChannel;
  ytChannel.Name = "BestChannel";
  ytChannel.OwnerName = "jack";
  ytChannel.SubscriberCount = 15;
  ytChannel.PublishedVideos = {"vid 1", "vid 2", "vid 3"};

  cout << "channel name: "<<ytChannel.Name << endl;
  cout << "owner name: " << ytChannel.OwnerName << endl;
  cout << "sub: " << ytChannel.SubscriberCount<< endl;
  cout << "videos: " << endl;
  for(string vid: ytChannel.PublishedVideos) {
    cout  << vid << endl;
  }

  return 0;
}
