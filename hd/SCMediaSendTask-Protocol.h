//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSObject.h"

@class NSArray, NSString, SCQueuePerformer;

@protocol SCMediaSendTask <NSObject, NSCoding>
@property(readonly, nonatomic) long long taskState;
@property(readonly, copy, nonatomic) NSString *feedId;
@property(nonatomic) __weak id <SCMediaSendTaskDelegate> delegate;
@property(readonly, copy, nonatomic) NSString *taskId;
- (NSString *)multiSnapBundleId;
- (void)prepareToBeRemoved;
- (void)clearInvalidRecipients;
- (NSString *)invalidRecipientsNameString;
- (_Bool)isValid;
- (void)updateFeedId;
- (NSArray *)groups;
- (NSString *)singleGroupId;
- (_Bool)isSendingOneOnOneSnap;
- (_Bool)isRecipientSingleGroupOrUser;
- (void)addOrUpdateSendToMessageInConversationWithSendStatus:(long long)arg1;
- (void)finishDecodingWithPerformer:(SCQueuePerformer *)arg1;
- (void)didFailToSend;
- (void)sendWithCompletionHandler:(void (^)(_Bool, NSError *))arg1 isAutoRetry:(_Bool)arg2 context:(NSString *)arg3;
- (void)sendWithCompletionHandler:(void (^)(_Bool, NSError *))arg1 context:(NSString *)arg2;
@end
