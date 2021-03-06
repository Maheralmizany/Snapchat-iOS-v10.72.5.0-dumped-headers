//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCaptureWorkflowResultDelegate.h"
#import "SCSnapActionsActionPerformable.h"

@class NSString, SCUserSession;

@interface SCSnapActionsCameraActionPerformer : NSObject <SCCaptureWorkflowResultDelegate, SCSnapActionsActionPerformable>
{
    SCUserSession *_userSession;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (id)performAction:(id)arg1 onViewController:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

