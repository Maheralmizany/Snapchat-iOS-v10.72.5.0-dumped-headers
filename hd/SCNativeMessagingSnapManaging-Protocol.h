//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol SCNativeMessagingSnapManaging
- (void)requestSnapReplayForConversationId:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)updateSnapDownloadStatus:(long long)arg1 conversationId:(NSString *)arg2 messageId:(NSString *)arg3;
- (void)updateSnapInteractionWithType:(long long)arg1 conversationId:(NSString *)arg2 messageId:(NSString *)arg3;
@end
