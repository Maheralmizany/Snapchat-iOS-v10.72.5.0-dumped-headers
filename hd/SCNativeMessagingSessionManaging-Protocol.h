//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCNMessagingConversationManager, SCNMessagingSession, SCNativeFeedManager;

@protocol SCNativeMessagingSessionManaging
- (id <SCArroyoConversationDataUpdateAnnouncer>)conversationDataUpdateAnnouncer;
- (SCNMessagingSession *)getNativeSession;
- (id <SCNativeMessagingSnapManaging>)getSnapManager;
- (SCNativeFeedManager *)getFeedManager;
- (SCNMessagingConversationManager *)getNativeConversationManager;
- (void)dispose;
- (void)endSession;
- (void)createSession;
@end
