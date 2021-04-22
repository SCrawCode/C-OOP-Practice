//Practice with Classes (User-Defined Data type)
//Make a class for YoutTube channels with channel stats as attributes
//Utilize Constructors to simplify code for multiple instances of class
//A constructor is a method used to create an object of a specific class

#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
public:				//Makes attributes accessible outside of class
	string Name;
	string Owner;
	int subscriberCount;
	list<string> publishedVideos;

	YouTubeChannel(string name, string owner) {   //Constructor of Class
		Name = name;
		Owner = owner;
		subscriberCount = 0;   //A fresh channel starts with no subs
	}
};


int main() {
	//Objects of class
YouTubeChannel ytChannel("Driver Scottie-C", "Scottie Crawford");	
YouTubeChannel ytChannel2("Amy Sings", "Amy Wong");

	//Inefficient Method
	//ytChannel.name = "Driver Scottie-C";
	//ytChannel.owner = "Scott Crawford";
	//ytChannel.subscriberCount = 20;
	//ytChannel.publishedVideos = {"Beats by Duce Ep.1", "Under the Hood Ep. 1"};

	cout << "Channel: " << ytChannel.Name << endl;
	cout << "YouTuber: " << ytChannel.Owner << endl;
	cout << "Subscribers: " << ytChannel.subscriberCount << endl;
	cout << "Published Videos: ";
	for (string videoTitle: ytChannel.publishedVideos) {
		cout << videoTitle << ", ";
	}

	cout << endl;
	cout << "Channel: " << ytChannel2.Name << endl;
	cout << "YouTuber: " << ytChannel2.Owner << endl;
	cout << "Subscribers: " << ytChannel2.subscriberCount << endl;
	cout << "Published Videos: ";
	for (string videoTitle: ytChannel2.publishedVideos) {
		cout << videoTitle << ", ";
	}
	cout << endl;
return 0;
}
