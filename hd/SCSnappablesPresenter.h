//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCaptureWorkflowResultDelegate.h"
#import "SCSnappablesPresenting.h"

@class NSString, SCSnappablesDismissalCoordinator, SCUserSession;

@interface SCSnappablesPresenter : NSObject <SCCaptureWorkflowResultDelegate, SCSnappablesPresenting>
{
    SCUserSession *_userSession;
    id <SCNotificationManager> _notificationManager;
    id <SCCameraViewConfiguration> _cameraLoadingConfigurationController;
    SCSnappablesDismissalCoordinator *_dismissalCoordinator;
}

@property(readonly, nonatomic) SCSnappablesDismissalCoordinator *dismissalCoordinator; // @synthesize dismissalCoordinator=_dismissalCoordinator;
- (void).cxx_destruct;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)captureWorkflowWillDismissWithDidSendSnap:(_Bool)arg1;
- (void)_unlockedLensForID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentCameraViewControllerWithState:(id)arg1 captureWorkflow:(id)arg2 fromViewController:(id)arg3;
- (void)presentSnappablesWithLens:(id)arg1 payload:(id)arg2 origin:(unsigned long long)arg3 replyParameters:(id)arg4 fromViewController:(id)arg5;
- (void)presentSnappablesWithLensID:(id)arg1 payload:(id)arg2 origin:(unsigned long long)arg3 replyParameters:(id)arg4 fromViewController:(id)arg5;
- (id)initWithUserSession:(id)arg1 notificationProcessingManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
