//Practice with Classes (User-Defined Data type)
//Make a class for YoutTube channels with channel stats as attributes
//Utilize Constructors to simplify code for multiple instances of class
//A constructor is a method used to create an object of a specific class
//Utilize Encapsulation to prevent user from altering class data (Make Private)
//Hide class attributes from being directly manipulated and use public methods to allow program defined alterations
//Utilize inheritance to create derived classes that use the traits of a base class


#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:			//Makes attributes unaccessible outside of class
	string Name;
	int subscriberCount;
	list<string> publishedVideos;

protected:              //Allows access from derived classes
    string Owner;

public:				//Allows user to interact with name and owner
	YouTubeChannel(string name, string owner) {                    //Constructor of Class
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

class cookingYouTubeChannel:public YouTubeChannel {
public:
    cookingYouTubeChannel(string name, string owner):YouTubeChannel(name, owner) {}
    
    void Practice() {
     cout << "Join " << Owner << " Practice Cooking, Learning New Recipes, and Experimenting with Spices!!!\n";   
    }
};


int main() {
    cookingYouTubeChannel cookingYtChannel("Amy's Kitchen", "Amy Wong");
    cookingYouTubeChannel cookingYtChannel2("John's Kitchen", "John Sean");
    cookingYtChannel.publishVid("Amy's Pie!");
    cookingYtChannel.publishVid("Chocolate Cake");
    cookingYtChannel.subscribe();
    cookingYtChannel.subscribe();    
    cookingYtChannel.Practice();       //Method only availiable for cookingYouTubeChannel class objects
    cookingYtChannel.getInfo();
    
    cookingYtChannel2.Practice();
return 0;
}
