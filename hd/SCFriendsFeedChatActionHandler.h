//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMessageLoaderDelegate.h"
#import "SCEventAnnouncing.h"

@class NSString, SCChatMessageLoader, SCEventListenerAnnouncer;

@interface SCFriendsFeedChatActionHandler : NSObject <SCChatMessageLoaderDelegate, SCEventAnnouncing>
{
    SCChatMessageLoader *_chatMessageLoader;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)loadStartedForMediaContent:(id)arg1;
- (void)_prepareMediaForReceivedMessage:(id)arg1 messageMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareMediaForReceivedMessage:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

