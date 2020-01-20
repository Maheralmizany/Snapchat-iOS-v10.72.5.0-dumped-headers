//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAppNotificationProviderDelegate.h"
#import "SCTPhoneCallListener.h"

@class NSDate, NSMutableArray, NSString, NSTimer, SCAppNotification, SCUserSession;

@interface SCAppNotificationSequencer : NSObject <SCAppNotificationProviderDelegate, SCTPhoneCallListener>
{
    NSTimer *_requeryPolicyTimer;
    NSTimer *_currentNotificationTimer;
    NSDate *_currentNotificationExpectedEndTime;
    NSMutableArray *_highPriorityNotifications;
    NSMutableArray *_notifications;
    double _pausedNotificationTimeRemaining;
    SCAppNotification *_pausedNotification;
    SCAppNotification *_activeNotification;
    id <SCAppNotificationSequencerDelegate> _delegate;
    id <SCInAppNotificationDisplayProtocol> _displayProtocol;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <SCInAppNotificationDisplayProtocol> displayProtocol; // @synthesize displayProtocol=_displayProtocol;
@property(readonly, nonatomic) __weak id <SCAppNotificationSequencerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCAppNotification *activeNotification; // @synthesize activeNotification=_activeNotification;
- (void).cxx_destruct;
- (void)didApplicationStateChange:(_Bool)arg1 withCurrentNotifications:(id)arg2;
- (void)clearAllNotifications;
- (void)enqueueNotification:(id)arg1;
- (void)displayNotification:(id)arg1;
- (_Bool)canDisplayNotification:(id)arg1;
- (void)hideNotification:(id)arg1;
- (void)onPhoneActivityChanged:(_Bool)arg1;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)verifyWhetherAnyPendingNotificationsShouldBeRevoked;
- (void)suppressActiveNotification;
- (void)expireActiveNotification:(id)arg1;
- (void)displayNotification:(id)arg1 forInterval:(double)arg2;
- (void)displayNextNotification;
- (void)requeryPolicy:(id)arg1;
- (id)dequeueNextNotification;
- (void)updateActiveNotificationProperty:(id)arg1 withInterruption:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

