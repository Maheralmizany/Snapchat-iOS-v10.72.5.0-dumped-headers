//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaBlockingViewController.h"
#import "SCOperaLoadingLayerViewDelegate.h"

@class NSString, SCGCDBlockTimer, SCOperaLoadingLayerView;

@interface SCOperaLoadingLayerViewController : SCOperaLayerViewController <SCOperaLoadingLayerViewDelegate, SCOperaBlockingViewController>
{
    SCOperaLoadingLayerView *_layerView;
    _Bool _isDismissing;
    SCGCDBlockTimer *_delayTimer;
    _Bool _shouldConsiderShowingSpinner;
    _Bool _isMonitoringProgressUpdate;
    SCGCDBlockTimer *_progressRetryTimer;
    NSString *_monitoringProgressRequestId;
    id <SCOperaBlockingViewControllerDelegate> _blockingViewControllerDelegate;
}

@property(nonatomic) __weak id <SCOperaBlockingViewControllerDelegate> blockingViewControllerDelegate; // @synthesize blockingViewControllerDelegate=_blockingViewControllerDelegate;
- (void).cxx_destruct;
- (void)loadingLayerViewDidPressErrorButton:(id)arg1;
- (void)_scheduleRetryForProgressMonitor;
- (void)_progressUpdateHandlerWithProgress:(float)arg1 error:(id)arg2;
- (void)_startMonitoringProgressUpdateIfNeededWithRequestId:(id)arg1;
- (void)_resetLoadingProgressMonitor;
- (void)_updateLoadingProgressMonitingStateIfNeeded;
- (void)_hideLoadingLayerView;
- (void)_showLoadingIndicatorIfNecessary;
- (void)teardown;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)loadView;
- (void)dealloc;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (_Bool)shouldBlockOtherLayersFromDisplayingWithCurrentPage:(id)arg1;
- (_Bool)isBeingDismissed;
- (_Bool)isBlocking;
- (void)didTryPagingWhenPagingDisabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
