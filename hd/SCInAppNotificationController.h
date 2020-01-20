//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAppNotificationSequencerDelegate.h"
#import "SCInAppNotificationViewV2Delegate.h"

@class NSMutableDictionary, NSString, SCAppNotification, SCAppNotificationSequencer, SCInAppNotificationViewV2;

@interface SCInAppNotificationController : NSObject <SCAppNotificationSequencerDelegate, SCInAppNotificationViewV2Delegate>
{
    SCInAppNotificationViewV2 *_view;
    id <SCInAppNotificationDisplayProtocol> _vcForPolicy;
    _Bool _didPauseMediaForVC;
    SCAppNotification *_currentNotification;
    NSMutableDictionary *_notificationWaitPeriods;
    SCAppNotificationSequencer *_inAppNotificationPresenter;
    id <SCInAppNotificationInteractionDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCInAppNotificationInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCAppNotificationSequencer *inAppNotificationPresenter; // @synthesize inAppNotificationPresenter=_inAppNotificationPresenter;
- (void).cxx_destruct;
- (void)handleInAppNotificationDismissed:(id)arg1;
- (void)handleInAppNotificationPressed:(id)arg1;
- (id)otherParticipant;
- (void)shouldIgnoreNotificationTapEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)didResumeTimer;
- (void)didPauseTimer;
- (void)didChangeDisplayProtocol:(id)arg1;
- (void)handleQueuedNotificationRevoked:(id)arg1;
- (void)handleCurrentNotificationDidChange:(id)arg1 didInterrupt:(_Bool)arg2;
- (void)maybeResumeVCPlayback;
- (void)maybePauseVCPlaybackForNotification:(id)arg1;
- (void)ensureView;
- (void)applicationDidBackground:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

