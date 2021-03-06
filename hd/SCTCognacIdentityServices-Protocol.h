//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol SCTCognacIdentityServices <NSObject>
- (void)getConversationCtxInfoForConvoId:(NSString *)arg1 completion:(void (^)(struct NSDictionary *, int))arg2;
- (void)refreshCognacAuthForConvoId:(NSString *)arg1 cognacId:(NSString *)arg2 completion:(void (^)(void))arg3;
- (id <SCTAuth>)cognacAuthForConvoId:(NSString *)arg1 cognacId:(NSString *)arg2;
- (id <SCTalkParticipant>)localParticipantForConvoId:(NSString *)arg1;
- (NSArray *)remoteParticipantsForConvoId:(NSString *)arg1;
@end

