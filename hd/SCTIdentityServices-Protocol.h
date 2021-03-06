//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTCognacIdentityServices.h"

@class NSArray, NSString;

@protocol SCTIdentityServices <SCTCognacIdentityServices>
- (void)ensureConvoExistsOnServerForConvoId:(NSString *)arg1 completion:(void (^)(void))arg2;
- (_Bool)isBestFriendConvoId:(NSString *)arg1;
- (NSString *)displayNameForConvoId:(NSString *)arg1;
- (void)refreshTalkAuthForConvoId:(NSString *)arg1 completion:(void (^)(void))arg2;
- (id <SCTAuth>)talkAuthForConvoId:(NSString *)arg1;
- (void)setPushTalkAuth:(id <SCTAuth>)arg1 convoId:(NSString *)arg2;
- (void)localParticipantForConvoId:(NSString *)arg1 completion:(void (^)(id <SCTalkParticipant>))arg2;
- (id <SCTalkParticipant>)localParticipantForConvoId:(NSString *)arg1;
- (NSArray *)remoteParticipantsForConvoId:(NSString *)arg1;
@end

