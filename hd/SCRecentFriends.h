//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, SCQueuePerformer;

@interface SCRecentFriends : NSObject <NSCoding>
{
    SCQueuePerformer *_performer;
    long long _capacity;
    NSArray *_recentFriends;
}

+ (_Bool)shouldAddAsRecent:(id)arg1;
@property(retain) NSArray *recentFriends; // @synthesize recentFriends=_recentFriends;
- (void).cxx_destruct;
- (void)removeFriend:(id)arg1;
- (void)_updateLastInteractionTimestampWithRecentFriend:(id)arg1;
- (void)_updateWithRecentFriends:(id)arg1;
- (void)updateWithUsernameTimestampMap:(id)arg1;
- (void)updateWithUsername:(id)arg1 timestamp:(id)arg2;
- (void)updateWithUsernames:(id)arg1;
- (id)recents;
- (void)encodeWithCoder:(id)arg1;
- (void)setPerformer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerformer:(id)arg1;
- (void)setCapacity:(unsigned long long)arg1;
- (unsigned long long)capacity;

@end
