//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@protocol SCGroupActionHandler
- (void)getGroupByParticipants:(NSArray *)arg1 completion:(void (^)(id <SCChatGroup>))arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)updateMuteStoryStateForGroupWithId:(NSString *)arg1 isStoryMuted:(_Bool)arg2;
- (void)grantGroupExemptBlockedUsersWithId:(NSString *)arg1 newBlockedParticipantExceptions:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSString *, id <SCChatGroup>))arg3;
@end
