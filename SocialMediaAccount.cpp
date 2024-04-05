#include "SocialMediaAccount.h"
using namespace std;

template<typename T>
SocialMediaAccount<T>::SocialMediaAccount(T handler, bool isPrivate):handler(handler), isPrivate(isPrivate), followerCount(0), followedCount(0) {}
template<typename T>
void SocialMediaAccount<T>::setPrivacy(bool isPrivate) {
    this->isPrivate = isPrivate;}
template<typename T>
bool SocialMediaAccount<T>::getPrivacy() const {
    return isPrivate;}
template<typename T>
void SocialMediaAccount<T>::addFollower(T user) {
    if (followerCount < maxFollowers) {
        followers[followerCount++] = user;
        cout<<user<<" is now following "<<handler<<endl;
    } else {
        cout<<"Cannot add more followers!"<<endl;
    }
}
template<typename T>
void SocialMediaAccount<T>::addFollowed(T user) {
    if (followedCount < maxFollowed) {
        followed[followedCount++] = user;
        cout<<handler<<" is now following "<<user<<endl;
    } else {
        cout<<"Cannot follow more accounts!"<<endl;
    }
}
template<typename T>
void SocialMediaAccount<T>::displayFollowers() const {
    if (!isPrivate) {
        cout << "Followers of " << handler << ":" << endl;
        for (int i = 0;i<followerCount;++i) {
            cout << followers[i] << endl;
        }
    } else {
        cout<<"This account is private. Followers cannot be displayed."<<endl;
    }
}
template<typename T>
void SocialMediaAccount<T>::displayFollowed() const {
    if (!isPrivate) {
        cout<<handler<<" is following:"<<endl;
        for (int i = 0;i<followedCount;++i) {
            cout<<followed[i]<<endl;
        }
    } else {
        cout<<"This account is private. Followed accounts cannot be displayed."<<endl;
    }
}
