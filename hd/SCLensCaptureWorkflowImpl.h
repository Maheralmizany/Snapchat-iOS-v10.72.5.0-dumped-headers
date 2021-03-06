//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensCaptureWorkflow.h"
#import "SCLensCaptureWorkflowDelegate.h"

@class NSString, SCLensCaptureWorkflowDelegateHandler;

@interface SCLensCaptureWorkflowImpl : NSObject <SCLensCaptureWorkflow, SCLensCaptureWorkflowDelegate>
{
    id <SCCaptureWorkflow> _captureWorkflow;
    SCLensCaptureWorkflowDelegateHandler *_captureWorkflowDelegateHandler;
    id <SCLensCaptureWorkflowDelegate> delegate;
}

@property(nonatomic) __weak id <SCLensCaptureWorkflowDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)_createConfigurationsForLens:(id)arg1;
- (void)lensCaptureWorkflowDidSaveSnapToMemories;
- (void)lensCaptureWorkflowWillDismissWithDidSendSnap:(_Bool)arg1;
- (void)lensCaptureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)performConfigurationWithLenses:(id)arg1;
- (void)performConfigurationWithLens:(id)arg1;
- (void)endWorkflowWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCaptureWorkflow:(id)arg1 captureWorkflowDelegateHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

