//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatConversationUpdaterListener.h"
#import "SCTV3CallStateListener.h"

@class NSString;

@interface SCBloopsConversationCallStateListener : NSObject <SCChatConversationUpdaterListener, SCTV3CallStateListener>
{
    id <SCTalkManager> _talkManager;
    NSString *_activeConversationId;
    id <SCBloopsConversationCallStateListenerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCBloopsConversationCallStateListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPublishedMediaOrMuteChanged:(id)arg1 media:(unsigned long long)arg2 muted:(_Bool)arg3;
- (void)onOutgoingCallStarted;
- (void)onOutgoingCallRequested;
- (void)onOutgoingCallRejected;
- (void)onOutgoingCallMissed;
- (void)onOutgoingCallCancelled;
- (void)onIncomingCallWatched;
- (void)onIncomingCallStarted;
- (void)onIncomingCallReceived;
- (void)onIncomingCallCancelled;
- (void)onCallWatched;
- (void)onCallEnded;
- (void)didConversationViewModelChange:(id)arg1;
- (void)stopListening;
- (void)startListeningWithTalkManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

