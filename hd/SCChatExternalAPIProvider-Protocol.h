//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, SCExperimentManager;

@protocol SCChatExternalAPIProvider <NSObject>
- (_Bool)isUserSessionInvalidated;
- (_Bool)isUserLoggedIn;
- (NSDate *)birthday;
- (id <SCNotificationManager>)notificationManager;
- (id <SCChatStoryLoader>)storyLoader;
- (id <SCUserHelperProtocol>)userHelper;
- (id <SCFideliusProtocol>)fideliusManager;
- (id <SCFideliusUnwrapProtocol>)fideliusUnwrapper;
- (id <SCChatTooltipState>)tooltipManager;
- (id <SCChatGalleryLogger>)galleryLogger;
- (id <SCSnapLogger>)snapLogger;
- (id <SCChatLogger>)logger;
- (id <SCChatMediaFileManager>)chatMediaFileManager;
- (id <SCPreloadControllerProtocol>)preloadController;
- (SCExperimentManager *)experimentManager;
- (id <SCEncryptionKeyManagerProtocol> (^)(void))cacheEncryptionKeyManagerGetterBlock;
- (id <SCChatConversationFetcher>)conversationFetcher;
- (id <SCChatMessageReceiver>)messageReceiver;
- (id <SCChatMessageSender>)messageSender;
- (id <SCChatRequestManager>)chatRequestManager;
@end
