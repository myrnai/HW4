#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Twitter.h"
#include "Instagram.h"
using namespace std;

struct Profile {
    int userId;
    string username;
};
string generateRandomUsername() {
    string username="User";
    username += to_string(rand() % 1000);
    return username;
}
int main() {
    srand(static_cast<unsigned int>(time(0)));
    Twitter<string> TS("User1");
    Twitter<Profile> TP(Profile{1001, "User2"});
    Instagram<string> IS("User3");
    Instagram<Profile> IP(Profile{1002, "User4"});
    string randomUsers[] = {"Follower1", "Follower2", "Follower3", "Follower4", "Follower5"};
    Profile randomProfiles[] = {{1003, "Followed1"}, {1004, "Followed2"}, {1005, "Followed3"}, {1006, "Followed4"}, {1007, "Followed5"}};
    for (int i = 0;i < 5;++i) {
        TS.addFollower(randomUsers[i]);
        TP.addFollower(randomProfiles[i]);
        IS.addFollowed(randomUsers[i]);
        IP.addFollowed(randomProfiles[i]);
    }
    TS.displayFollowers();
    TP.displayFollowers();
    IS.displayFollowed();
    IP.displayFollowed();
    cout<<"Bonus Test: Dynamic Arrays"<<endl;
    Twitter<string*> TSDynamic("User1");
    Instagram<string*> ISDynamic("User3");
    for (int i = 0; i < 5; ++i) {
        string* follower = new string(generateRandomUsername());
        string* followed = new string(generateRandomUsername());
        TSDynamic.addFollower(follower);
        ISDynamic.addFollowed(followed);
    }
    TSDynamic.displayFollowers();
    ISDynamic.displayFollowed();
    for (int i = 0;i < 5;++i) {
        delete TSDynamic.followers[i];
        delete ISDynamic.followed[i];
    }
    return 0;
}
