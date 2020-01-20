//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatExternalAPIProvider.h"

@class NSString, SCUserSession, User;

@interface SCChatExternalAPIProvider : NSObject <SCChatExternalAPIProvider>
{
    id <SCChatMessageSender> _messageSender;
    id <SCChatConversationFetcher> _conversationFetcher;
    id <SCChatMediaFileManager> _mediaFileManager;
    id <SCChatStoryLoader> _storyLoader;
    id <SCSnapLogger> _snapLogger;
    id <SCChatRequestManager> _chatRequestManager;
    SCUserSession *_userSession;
    User *_user;
    id <SCNotificationManager> _notificationManager;
}

- (void).cxx_destruct;
- (_Bool)isUserSessionInvalidated;
- (_Bool)isUserLoggedIn;
- (id)birthday;
- (id)notificationManager;
- (id)userHelper;
- (id)fideliusManager;
- (id)fideliusUnwrapper;
- (id)experimentManager;
- (id)storyLoader;
- (id)tooltipManager;
- (id)galleryLogger;
- (id)snapLogger;
- (id)logger;
- (id)chatMediaFileManager;
- (id)preloadController;
- (CDUnknownBlockType)cacheEncryptionKeyManagerGetterBlock;
- (id)chatRequestManager;
- (id)conversationFetcher;
- (id)messageReceiver;
- (id)messageSender;
- (id)initWithUser:(id)arg1 userSession:(id)arg2 friendsFeedUFSDataCoordinator:(id)arg3 docObjectContext:(id)arg4 loadMessageLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
