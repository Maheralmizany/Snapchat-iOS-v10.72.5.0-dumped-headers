//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCaptureWorkflowResultDelegate.h"

@class NSString, SCLens;

@interface SCSnappablesDismissalCoordinator : NSObject <SCCaptureWorkflowResultDelegate>
{
    SCLens *_lens;
    id <SCNotificationManager> _notificationProcessingManager;
    id <SCSnappablesDismissalCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSnappablesDismissalCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showSentToast;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)captureWorkflowWillDismissWithDidSendSnap:(_Bool)arg1;
- (void)prepareWithLens:(id)arg1;
- (id)initWithNotificationProcessingManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

