#include "Instagram.h"
using namespace std;

template<typename T>
Instagram<T>::Instagram(T handler, bool isPrivate):SocialMediaAccount<T>(handler, isPrivate), likeCount(0) {}
template<typename T>
int Instagram<T>::getLikeCount() const {
    return likeCount;
}
template<typename T>
void Instagram<T>::setLikeCount(int count) {
    likeCount = count;
}
template<typename T>
void Instagram<T>::Like() {
    ++likeCount;
    cout<<"Like by "<<this->handler<<" is incremented."<<endl;
}
