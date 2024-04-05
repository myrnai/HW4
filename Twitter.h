#ifndef TWITTER_H
#define TWITTER_H
#include "SocialMediaAccount.h"
using namespace std;

template<typename T>
class Twitter:public SocialMediaAccount<T> {
private:
    int retweetCount; // This is the total number of retweets
public:
    Twitter(T handler, bool isPrivate=true);
    int getRetweetCount() const;
    void setRetweetCount(int count);
    void RT();
};
#include "Twitter.cpp"
#endif // TWITTER_H
