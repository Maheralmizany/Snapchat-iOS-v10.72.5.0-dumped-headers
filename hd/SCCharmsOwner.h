//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCCharmsOwner : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_friend_friendUserID;
    NSString *_chatGroup_groupMischiefID;
}

+ (id)friendWithFriendUserID:(id)arg1;
+ (id)chatGroupWithGroupMischiefID:(id)arg1;
- (void).cxx_destruct;
- (void)matchFriend:(CDUnknownBlockType)arg1 chatGroup:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

