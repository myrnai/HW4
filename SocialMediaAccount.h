#ifndef SOCIALMEDIAACCOUNT_H
#define SOCIALMEDIAACCOUNT_H
#include <iostream>
using namespace std;

template<typename T>
class SocialMediaAccount {
private:
    static const int maxFollowers = 100; // This is the max number of followers
    static const int maxFollowed = 100;  // This is the max number of followed accounts
    T handler;                          // This is the account owner
    T followers[maxFollowers];
    T followed[maxFollowed];
    int followerCount;                  // This is the current number of followers
    int followedCount;                  // This is the current number of followed accounts
    bool isPrivate;
public:
    SocialMediaAccount(T handler, bool isPrivate = true);
    void setPrivacy(bool isPrivate);
    bool getPrivacy() const;
    void addFollower(T user);
    void addFollowed(T user);
    void displayFollowers() const;
    void displayFollowed() const;
};

#include "SocialMediaAccount.cpp"
#endif // SOCIALMEDIAACCOUNT_H
