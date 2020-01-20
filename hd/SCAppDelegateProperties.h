//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAppDelegatePropertiesProtocol.h"

@class SCAppNotification, SCAppStateTracker, SCBehaviorSubject, SCFailedUserEventNotificationController, SCHockeyAppDelegate, SCInAppNotificationController, SCQueuePerformer, SCSnapchatScopeGraph, SCStartupCaptureHardwareWarmer, SCStructuredStartupLogger, SCUserNotificationCenterController, SCUserSession, SCWindow;

@interface SCAppDelegateProperties : NSObject <SCAppDelegatePropertiesProtocol>
{
    _Bool _didBecomeActiveWithRemoteNotification;
    _Bool _didLaunchWhenProtectedDataUnavailable;
    _Bool _didLaunchWithDidFinishLaunching;
    _Bool _didUserTriggerEmergencyMode;
    SCBehaviorSubject *_applicationLifecycleEvents;
    SCAppNotification *_appNotification;
    SCAppStateTracker *_appStateTracker;
    SCBehaviorSubject *_backgroundPrefetchHandler;
    SCStartupCaptureHardwareWarmer *_captureHardwareWarmer;
    SCFailedUserEventNotificationController *_failedUserEventNotificationController;
    SCHockeyAppDelegate *_hockeyAppDelegate;
    SCInAppNotificationController *_inAppNotificationController;
    SCAppNotification *_launchingNotification;
    SCBehaviorSubject *_notificationLifecycleEvents;
    SCQueuePerformer *_performer;
    SCAppNotification *_remoteNotificationFromLaunch;
    SCSnapchatScopeGraph *_scopeGraph;
    SCStructuredStartupLogger *_structuredStartupLogger;
    SCUserNotificationCenterController *_userNotificationCenterController;
    SCUserSession *_userSession;
    SCWindow *_window;
}

@property(retain, nonatomic) SCWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCUserNotificationCenterController *userNotificationCenterController; // @synthesize userNotificationCenterController=_userNotificationCenterController;
@property(readonly, nonatomic) SCStructuredStartupLogger *structuredStartupLogger; // @synthesize structuredStartupLogger=_structuredStartupLogger;
@property(retain, nonatomic) SCSnapchatScopeGraph *scopeGraph; // @synthesize scopeGraph=_scopeGraph;
@property(retain, nonatomic) SCAppNotification *remoteNotificationFromLaunch; // @synthesize remoteNotificationFromLaunch=_remoteNotificationFromLaunch;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) SCBehaviorSubject *notificationLifecycleEvents; // @synthesize notificationLifecycleEvents=_notificationLifecycleEvents;
@property(retain, nonatomic) SCAppNotification *launchingNotification; // @synthesize launchingNotification=_launchingNotification;
@property(retain, nonatomic) SCInAppNotificationController *inAppNotificationController; // @synthesize inAppNotificationController=_inAppNotificationController;
@property(retain, nonatomic) SCHockeyAppDelegate *hockeyAppDelegate; // @synthesize hockeyAppDelegate=_hockeyAppDelegate;
@property(retain, nonatomic) SCFailedUserEventNotificationController *failedUserEventNotificationController; // @synthesize failedUserEventNotificationController=_failedUserEventNotificationController;
@property(nonatomic) _Bool didUserTriggerEmergencyMode; // @synthesize didUserTriggerEmergencyMode=_didUserTriggerEmergencyMode;
@property(nonatomic) _Bool didLaunchWithDidFinishLaunching; // @synthesize didLaunchWithDidFinishLaunching=_didLaunchWithDidFinishLaunching;
@property(nonatomic) _Bool didLaunchWhenProtectedDataUnavailable; // @synthesize didLaunchWhenProtectedDataUnavailable=_didLaunchWhenProtectedDataUnavailable;
@property(nonatomic) _Bool didBecomeActiveWithRemoteNotification; // @synthesize didBecomeActiveWithRemoteNotification=_didBecomeActiveWithRemoteNotification;
@property(readonly, nonatomic) SCStartupCaptureHardwareWarmer *captureHardwareWarmer; // @synthesize captureHardwareWarmer=_captureHardwareWarmer;
@property(retain, nonatomic) SCBehaviorSubject *backgroundPrefetchHandler; // @synthesize backgroundPrefetchHandler=_backgroundPrefetchHandler;
@property(retain, nonatomic) SCAppStateTracker *appStateTracker; // @synthesize appStateTracker=_appStateTracker;
@property(retain, nonatomic) SCAppNotification *appNotification; // @synthesize appNotification=_appNotification;
@property(retain, nonatomic) SCBehaviorSubject *applicationLifecycleEvents; // @synthesize applicationLifecycleEvents=_applicationLifecycleEvents;
- (void).cxx_destruct;
- (id)init;

@end

