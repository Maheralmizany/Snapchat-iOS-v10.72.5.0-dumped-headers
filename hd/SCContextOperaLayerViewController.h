//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCContextOperaLayerViewControlling.h"
#import "SCOperaArrowDisplayable.h"
#import "SCPageNameLogging.h"

@class NSString, SCContextOperaLayerView, SCDisposableObserver, SCLazy, SCOperaEventListenerAnnouncer, SCOperaPage, UIView, UIViewController;

@interface SCContextOperaLayerViewController : SCOperaLayerViewController <SCOperaArrowDisplayable, SCPageNameLogging, SCContextOperaLayerViewControlling>
{
    SCContextOperaLayerView *_layerView;
    id <SCContextPresenting> _contextMenuController;
    UIViewController *_snapActionsCtaViewController;
    SCLazy *_contextDataBehaviorSubject;
    SCLazy *_paramsBehaviorSubject;
    SCDisposableObserver *_ctaResponseObserver;
    SCDisposableObserver *_ctaDataPublisherDisposable;
    _Bool _pageability;
    _Bool _isLayerViewFaded;
    _Bool _isLayerViewSuppressed;
    _Bool _operaUIPreparedForContentPresented;
    _Bool _presenterWantsCTAHidden;
    UIView *_swipeUpGestureView;
    UIView *_header;
}

@property(readonly, nonatomic) UIView *header; // @synthesize header=_header;
@property(nonatomic) _Bool presenterWantsCTAHidden; // @synthesize presenterWantsCTAHidden=_presenterWantsCTAHidden;
@property(nonatomic) __weak UIView *swipeUpGestureView; // @synthesize swipeUpGestureView=_swipeUpGestureView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isRecyclable;
- (void)_setLayerVisible:(_Bool)arg1;
- (void)_updateLayerVisibility;
- (_Bool)_isContextMenuPresented;
- (void)viewWillFullyAppear;
- (id)currentViewParameters;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)resume;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)setupSnapActionsCtaWithContextMenuProvider:(id)arg1 userSession:(id)arg2;
- (void)setupContextV2CtaWithContextMenuProvider:(id)arg1;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (void)resumePlaybackIfNecessary;
- (void)requestNativeVolumeUI:(_Bool)arg1;
@property(readonly, nonatomic) SCOperaPage *page;
@property(nonatomic, getter=isPageable) _Bool pageable;
- (void)_setOperaUIPreparedForContentPresented:(_Bool)arg1;
- (void)prepareOperaUIForSwipeUpContentDismissed;
- (void)prepareOperaUIForShowingSwipeUpContent;
- (id)pageViewName;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SCOperaEventListenerAnnouncer *eventAnnouncer;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
