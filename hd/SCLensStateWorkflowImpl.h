//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensStateWorkflow.h"
#import "SCLensUserSessionLifeCycleListener.h"
#import "SCTraceEnabled.h"

@class NSString, SCLensLogger, SCPromise;

@interface SCLensStateWorkflowImpl : NSObject <SCTraceEnabled, SCLensUserSessionLifeCycleListener, SCLensStateWorkflow>
{
    SCPromise *_restoreStatePromise;
    SCLensLogger *_lensLogger;
    id <SCLensUserSessionLifeCycleNotifier> _lensUserSessionLifeCycleNotifier;
    NSString *_currentLensSessionId;
    id <SCLensStateWorkflowDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensStateWorkflowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startHandlingVolumeButtonEventsIfNeeded;
- (id)lensEntryPointTrackable;
- (id)cameraLensesInteractor;
- (_Bool)isPresentingPreviewViewController;
- (id)defaultEmptyLensControllerStateBuilder;
- (id)userSession;
- (id)cameraViewControllerLensDelegate;
- (id)state;
- (void)lensUserSession:(id)arg1 didChangeIsValidState:(_Bool)arg2;
- (void)saveLensState;
- (void)clearLensState;
- (void)_scheduleResetLensStateBlock;
- (void)_cancelResetLensStateBlockIfNeeded;
- (void)resetLensStateForce:(_Bool)arg1;
- (void)_resetLensStateIfNeded;
- (void)_didTryToRestoreStateForLens:(id)arg1 success:(_Bool)arg2;
- (void)restoreOrRecreateStateForLens:(id)arg1;
- (long long)currentLensSource;
- (void)beginLensStateForLensSource:(long long)arg1;
- (void)_fulfillRestoreStatePromiseIfPossibleWithSuccess:(_Bool)arg1;
- (void)_restoreLensStateWithActivationParameters:(id)arg1 activationState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_restoreLensState;
- (void)restoreLensState;
- (void)resetLensState;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 lensLogger:(id)arg2 lensUserSessionLifeCycleNotifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

