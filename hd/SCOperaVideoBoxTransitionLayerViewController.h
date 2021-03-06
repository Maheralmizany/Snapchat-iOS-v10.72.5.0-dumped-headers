//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaEventListener.h"
#import "SCOperaGestureDelegateViewController.h"
#import "SCOperaPageableViewControllerDelegate.h"
#import "SCOperaVideoBoxTransitionLayerViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCOperaEventListenerAnnouncer, SCOperaPage, SCOperaPageViewController, SCOperaVideoBoxTransitionLayerView, SCStopwatch, UIPanGestureRecognizer, UIView;

@interface SCOperaVideoBoxTransitionLayerViewController : SCOperaLayerViewController <UIGestureRecognizerDelegate, SCOperaPageableViewControllerDelegate, SCOperaEventListener, SCOperaVideoBoxTransitionLayerViewDelegate, SCOperaGestureDelegateViewController>
{
    UIPanGestureRecognizer *_swipeRecognizer;
    SCOperaVideoBoxTransitionLayerView *_layerView;
    _Bool _bottomScrollViewIsAtTopBoundary;
    SCOperaPageViewController *_bottomPageViewController;
    SCOperaPage *_bottomPage;
    SCOperaEventListenerAnnouncer *_bottomPageEventAnnouncer;
    SCStopwatch *_halfOpenStopwatch;
    UIView *_delegateViewForGestures;
}

@property(nonatomic) __weak UIView *delegateViewForGestures; // @synthesize delegateViewForGestures=_delegateViewForGestures;
- (void).cxx_destruct;
- (long long)_videoBoxOpenStatus;
- (_Bool)_isBottomPageFullyAppear;
- (_Bool)_isBottomPageNeighborViewFullyAppear;
- (_Bool)_bottomPageAllowsSwipeDownToDismiss:(id)arg1;
- (id)_bottomPageParameters;
- (id)_topPageParameters;
- (void)setImageForBackdrop:(id)arg1;
- (void)setPausedForAttachment:(_Bool)arg1;
- (unsigned long long)relativePositionForPageId:(id)arg1;
- (_Bool)pageIsPartiallyVisible:(id)arg1;
- (_Bool)pageIsFullyVisible:(id)arg1;
- (void)_tearDownBottomPage;
- (void)_updateBottomViewControllerWithPageProperties:(id)arg1;
- (void)_bottomPageNeighborViewDidFullyAppear;
- (void)_bottomPageDidDisappear;
- (void)_bottomPageDidAppear;
- (void)_bottomPageWillAppear;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)_bottomPageEventsToHandleWhenFullyOpen;
- (id)_registeredEventsForBottomPage;
- (id)_topOperaEventsToListen;
- (void)_restartMediaBox;
- (void)_resetAndPauseMediaBox;
- (void)_expandMediaBox;
- (void)_shrinkMediaBox;
- (void)_didTransitToCloseFromFull:(_Bool)arg1;
- (void)_didTransitFromHalfOpenToOpen;
- (void)_didTransitFromCloseToHalfOpen;
- (void)_scrollDownFromFullyOpen;
- (void)_scrollDownFromHalfOpen;
- (void)_scrollUpToFullyOpen;
- (void)_scrollUpToHalfOpen;
- (void)videoBoxTransitionLayerView:(id)arg1 didTapToOpen:(_Bool)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_swipeDownDetected;
- (void)_swipeUpDetected;
- (void)_swipeRecognized:(id)arg1;
- (void)_removeSwipeGesture;
- (void)_addSwipeGesture;
- (id)currentViewParameters;
- (void)resume;
- (void)teardown;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

