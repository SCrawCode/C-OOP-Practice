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

	//Class method that prints class attributes without repetition
	void getInfo() {
	cout << "Channel: " << Name << endl;
	cout << "YouTuber: " << Owner << endl;
	cout << "Subscribers: " << subscriberCount << endl;
	cout << "Published Videos: ";
	for (string videoTitle: publishedVideos) {
		cout << videoTitle << ", ";
		}
	cout << endl;	
	}
};


int main() {
	//Objects of class
YouTubeChannel ytChannel("Driver Scottie-C", "Scottie Crawford");	
	//Adds elements to class list
	ytChannel.publishedVideos.push_back("Beats by Duce Ep.1");
	ytChannel.publishedVideos.push_back("Under the Hood Ep.1");
YouTubeChannel ytChannel2("Amy Sings", "Amy Wong");
	ytChannel2.publishedVideos.push_back("Wong Way");
	ytChannel2.publishedVideos.push_back("Scottie in Amy");
	
	//Inefficient Method
	//ytChannel.name = "Driver Scottie-C";
	//ytChannel.owner = "Scott Crawford";
	//ytChannel.subscriberCount = 20;
	//ytChannel.publishedVideos = {"Beats by Duce Ep.1", "Under the Hood Ep. 1");
	
ytChannel.getInfo();
ytChannel2.getInfo();

return 0;
}
