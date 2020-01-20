//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatConversationUpdaterListener.h"
#import "SCTV3CallStateListener.h"

@class NSString, SCChatInputItem;

@interface SCChatInputItemCallListener : NSObject <SCTV3CallStateListener, SCChatConversationUpdaterListener>
{
    SCChatInputItem *_item;
    id <SCTalkManager> _talkManager;
    _Bool _isOriginallyCollapsable;
    unsigned long long _callVisibility;
    NSString *_activeConversationId;
    unsigned long long _currentCallVisibility;
}

@property(nonatomic) unsigned long long currentCallVisibility; // @synthesize currentCallVisibility=_currentCallVisibility;
- (void).cxx_destruct;
- (void)onPublishedMediaOrMuteChanged:(id)arg1 media:(unsigned long long)arg2 muted:(_Bool)arg3;
- (void)onOutgoingCallRequested;
- (void)onOutgoingCallRejected;
- (void)onOutgoingCallMissed;
- (void)onOutgoingCallCancelled;
- (void)onIncomingCallWatched;
- (void)onIncomingCallReceived;
- (void)onIncomingCallCancelled;
- (void)onCallWatched;
- (void)onIncomingCallStarted;
- (void)onOutgoingCallStarted;
- (void)onCallEnded;
- (void)didConversationViewModelChange:(id)arg1;
- (void)_hideItem;
- (void)_showItem;
- (void)_updateItemVisibility;
- (_Bool)_shouldShowItem;
- (_Bool)_visibleForCurrentCallVisibility;
- (void)_updateTalkListenerWithConversationId:(id)arg1 oldConversationId:(id)arg2;
- (id)initWithItem:(id)arg1 talkManager:(id)arg2 callStateVisibility:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

