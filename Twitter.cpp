#include "Twitter.h"
using namespace std;

template<typename T>
Twitter<T>::Twitter(T handler, bool isPrivate):SocialMediaAccount<T>(handler, isPrivate), retweetCount(0) {}
template<typename T>
int Twitter<T>::getRetweetCount() const {
    return retweetCount;
}
template<typename T>
void Twitter<T>::setRetweetCount(int count) {
    retweetCount = count;
}
template<typename T>
void Twitter<T>::RT() {
    ++retweetCount;
    cout<<"Retweet by "<<this->handler<<" is incremented."<<endl;
}
