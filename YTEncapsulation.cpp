//Practice with Classes (User-Defined Data type)
//Make a class for YoutTube channels with channel stats as attributes
//Utilize Constructors to simplify code for multiple instances of class
//A constructor is a method used to create an object of a specific class
//Utilize Encapsulation to prevent user from altering class data (Make Private)
//Hide class attributes from being directly manipulated and use public methods to
//-allow program defined alterations


#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:			//Makes attributes unaccessible outside of class
	string Name;
	string Owner;
	int subscriberCount;
	list<string> publishedVideos;

public:				//Allows user to interact with name and owner
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
	
	//Method that increments sub count by 1 per subscription
	void subscribe() {
		subscriberCount++;
	}
	void unsubscribe() {
		if (subscriberCount > 0) {
		subscriberCount--;
		}
	}

	//Method that publishes videos
	void publishVid(string Title) {
		publishedVideos.push_back(Title);
	}

};


int main() {
	//Objects of class
YouTubeChannel ytChannel("Driver Scottie-C", "Scottie Crawford");	
	//Adds elements to class list
	ytChannel.publishVid("Beats by Duce Ep.1");
	ytChannel.publishVid("Under the Hood Ep.1");

	ytChannel.subscribe();
	ytChannel.subscribe();
	ytChannel.unsubscribe();
	ytChannel.getInfo();

return 0;
}
