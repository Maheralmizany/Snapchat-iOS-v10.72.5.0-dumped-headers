//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUBitmojiGetAvatarAssetsRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_groupId;
    NSString *_deploymentEnvironment;
    NSString *_overrideAvatarUserId;
}

+ (id)withJUBitmojiGetAvatarAssetsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setOverrideAvatarUserId:(id)arg1;
- (id)setDeploymentEnvironment:(id)arg1;
- (id)setGroupId:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;
- (id)setDeploymentEnvironmentEnum:(long long)arg1;

@end

