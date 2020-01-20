//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaFadeTransitionCompatibleViewController.h"
#import "SCOperaLayerViewControllerShareableMediaSource.h"
#import "SCTraceEnabled.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCOperaChromeLayerView, UITapGestureRecognizer;

@interface SCOperaChromeLayerViewController : SCOperaLayerViewController <SCTraceEnabled, UIGestureRecognizerDelegate, SCOperaFadeTransitionCompatibleViewController, SCOperaLayerViewControllerShareableMediaSource>
{
    SCOperaChromeLayerView *_layerView;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (id)image;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_didTapOnHeaderClose:(id)arg1;
- (_Bool)_didTapOnCreatorAttribution:(id)arg1;
- (void)_didTap:(id)arg1;
- (void)_setupTapGesture;
- (void)_fadeOut;
- (void)viewDidFullyAppear;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)_updateRepostIcon:(id)arg1;
- (void)_updateViewVisibility:(id)arg1;
- (void)_resetLayerView;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)teardown;
- (void)loadView;
- (id)shareableMedia;
- (void)updateViewWithRelativeHorizontalContentOffset:(double)arg1;
- (void)didReceiveUpdateProperties:(id)arg1;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
