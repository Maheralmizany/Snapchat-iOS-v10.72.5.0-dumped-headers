//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SOJUIdentityMischief;

@protocol SCGroupManagerListener <NSObject>
- (void)didCreateGroupOnServerWithId:(NSString *)arg1 initialSojuMischief:(SOJUIdentityMischief *)arg2;
- (void)didJoinGroup:(id <SCChatGroup>)arg1;
- (void)didBeginLeavingGroupWithId:(NSString *)arg1;
- (void)didChangeInfoForGroup:(id <SCChatGroup>)arg1;
- (void)didFinishLoadingGroups;
@end

