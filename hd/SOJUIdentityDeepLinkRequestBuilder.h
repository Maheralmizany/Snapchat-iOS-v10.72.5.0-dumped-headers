//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUIdentityDeepLinkRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_deepLinkAction;
    NSString *_friendUsername;
    NSString *_linkId;
}

+ (id)withJUIdentityDeepLinkRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setLinkId:(id)arg1;
- (id)setFriendUsername:(id)arg1;
- (id)setDeepLinkAction:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;
- (id)setDeepLinkActionEnum:(long long)arg1;

@end

