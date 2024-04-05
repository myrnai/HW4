#ifndef INSTAGRAM_H
#define INSTAGRAM_H
#include "SocialMediaAccount.h"
using namespace std;

template<typename T>
class Instagram : public SocialMediaAccount<T> {
private:
    int likeCount; // This is the total number of likes
public:
    Instagram(T handler, bool isPrivate = true);
    int getLikeCount() const;
    void setLikeCount(int count);
    void Like();
};
#include "Instagram.cpp"
#endif // INSTAGRAM_H
