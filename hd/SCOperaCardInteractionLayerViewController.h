//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaSwipeInteractionControllerDelegate.h"
#import "SCWkWebViewWrapperDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, NSTimer, SCOperaCardInteractionLayerView, SCOperaSwipeInteractionController, SCStopwatch, SCWkWebViewWrapper, SKStoreProductViewController, UITapGestureRecognizer, UIView;

@interface SCOperaCardInteractionLayerViewController : SCOperaLayerViewController <SCOperaSwipeInteractionControllerDelegate, UIGestureRecognizerDelegate, SCWkWebViewWrapperDelegate, SKStoreProductViewControllerDelegate>
{
    _Bool _isSwiping;
    SCOperaCardInteractionLayerView *_layerView;
    SCOperaSwipeInteractionController *_interactionController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_delegateViewForPanAndTapGesture;
    _Bool _deepLinkFromCard;
    _Bool _deepLinkFellBackToAppStore;
    _Bool _deepLinkFellBackToWebview;
    unsigned long long _cardLastInteractionType;
    _Bool _loadedOnEntry;
    _Bool _cardDidFullyAppear;
    _Bool _layerVCDisabled;
    NSTimer *_cardInteractionTimer;
    double _deepLinkDelay;
    SCStopwatch *_cardViewStopwatch;
    SCWkWebViewWrapper *_wkWebViewWrapper;
    NSMutableArray *_candidateDeepLinkUrls;
    SKStoreProductViewController *_productViewController;
    struct CGPoint _tapLocationToScreen;
    double _tapLocationXToScreenWidthRatio;
    double _tapLocationYToScreenHeightRatio;
    _Bool _didTapCard;
    _Bool _didTouchLiveArea;
}

- (void).cxx_destruct;
- (void)_presentStoreProductVCModally;
- (void)_initStoreProductVC;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)_wkWebViewConfigDict;
- (void)cardPresentedTimePeriodReached;
- (void)_resetMetricData;
- (void)_didUpdateSubviewsVisible:(_Bool)arg1;
- (void)prepareForSwipeUp;
- (void)_openDeepLinkUrl:(id)arg1;
- (void)_openDeepLink;
- (void)_didSwipeDownToDismissCard;
- (void)_scheduleDeepLinkLaunch;
- (void)openUrl:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)swipeInteractionController:(id)arg1 shouldBeginPanWithDirection:(unsigned long long)arg2;
- (void)swipeInteractionController:(id)arg1 didFinishInteractionWithDelegateViewVisible:(_Bool)arg2;
- (void)swipeInteractionController:(id)arg1 didStartInteractionWithDelegateViewVisible:(_Bool)arg2;
- (_Bool)didTouchLiveAreaAtLocation:(struct CGPoint)arg1 delegateView:(id)arg2;
- (void)swipeInteractionController:(id)arg1 didUpdateVisiblePercent:(double)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)currentViewParameters;
- (void)teardown;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)enablePresentingLongformWithDelay:(_Bool)arg1;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)setCardTimer:(id)arg1;
- (void)setDelegateViewForPanGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

