//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUFriend, SOJUReceivedSnap;

@interface SOJUIdentityDeepLinkResponseBuilder : NSObject
{
    NSString *_deepLinkAction;
    NSNumber *_friendExists;
    SOJUFriend *_friend;
    SOJUReceivedSnap *_snap;
}

+ (id)withJUIdentityDeepLinkResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setSnap:(id)arg1;
- (id)setFriend:(id)arg1;
- (id)setFriendExists:(id)arg1;
- (id)setDeepLinkAction:(id)arg1;
- (id)build;
- (id)setFriendExistsValue:(_Bool)arg1;
- (id)setDeepLinkActionEnum:(long long)arg1;

@end

