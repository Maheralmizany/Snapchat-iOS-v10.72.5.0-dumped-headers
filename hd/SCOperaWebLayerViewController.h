//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaPageableViewControllerDelegate.h"
#import "SCOperaRemoteVideoControllerDelegate.h"
#import "SCOperaWebLayerVideoGestureRecognizer.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCOperaInlineVideo, SCOperaInlineVideoTransitioningDelegate, SCOperaRemoteVideoViewProvider, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface SCOperaWebLayerViewController : SCOperaLayerViewController <SCOperaWebLayerVideoGestureRecognizer, UIGestureRecognizerDelegate, SCOperaRemoteVideoControllerDelegate, SCOperaPageableViewControllerDelegate, UIScrollViewDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    SCOperaRemoteVideoViewProvider *_inlineVideoViewController;
    UITapGestureRecognizer *_tapToOpenInlineVideoRecognizer;
    _Bool _shouldPresentInlineVideoWhenInlineVideoDidDisappear;
    NSMutableDictionary *_inlineVideosProgress;
    NSMutableArray *_inlineVideos;
    SCOperaInlineVideo *_lastVideoPlayed;
    NSMutableDictionary *_videoFirstFrameKeyToImageView;
    SCOperaInlineVideoTransitioningDelegate *_inlineVideoTransitioningDelegate;
    UIView *_screenshotHidingView;
    _Bool _isScrolling;
    _Bool _scrollViewIsAtTopBoundary;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (void).cxx_destruct;
- (void)_setUpTapToOpenInlineVideoRecognizer;
- (void)_didTap:(id)arg1;
- (void)_setupTapGesture;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setupTapGestureRecognizers;
- (void)viewDidLoad;
- (void)reset;
- (void)teardown;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)setVolume:(double)arg1;
- (void)resume;
- (void)pause;
- (void)initInstanceVars;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (id)scrollView;
- (void)didResetWebView;
- (void)playProperVideoIfAvailable;
- (void)addInlineVideoWithParameters:(id)arg1;
- (id)addVideoParams:(id)arg1;
- (unsigned long long)inlineVideoCount;
- (void)setupScreenshotHidingViewForVideo:(id)arg1;
- (void)updateCurrentInlineVideoScreenshot;
- (void)replacePreviousInlineVideoWithScreenshot;
- (_Bool)isPresentingInlineVideo;
- (void)tearDownCurrentInlineInlineVideo;
- (void)tearDownInlineVideos;
- (void)playInlineVideo:(id)arg1;
- (void)didReceiveInlineVideoFirstFrameImageData:(id)arg1 forKey:(id)arg2 fromURL:(id)arg3;
- (void)fetchInlineVideoFirstFrameImage:(id)arg1;
- (void)expandInlineVideo:(id)arg1;
- (void)didTapVideo:(id)arg1;
- (void)didTapToOpenInlineVideo:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)remoteVideoViewControllerDidPressShowActionMenuButton;
- (void)remoteVideoViewControllerDidFinishPlaying;
- (void)remoteVideoViewControllerDidDisappear:(_Bool)arg1;
- (void)remoteVideoViewControllerWasPresented;
- (void)remoteVideoViewControllerDidPressExitButton;
- (void)remoteVideoViewControllerDidRotateToLandscape:(_Bool)arg1;
- (void)setImageForBackdrop:(id)arg1;
- (unsigned long long)relativePositionForPageId:(id)arg1;
- (_Bool)pageIsPartiallyVisible:(id)arg1;
- (_Bool)pageIsFullyVisible:(id)arg1;
- (void)_sendSubviewScrollViewIsAtTopBoundaryEvent:(_Bool)arg1;
- (void)_sendSubviewScrollViewStopEvent;
- (void)_scrollViewDidEndScrolling;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

