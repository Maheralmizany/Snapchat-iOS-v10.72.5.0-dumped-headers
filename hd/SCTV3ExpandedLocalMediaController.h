//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCGrowingButton, SCNoHitClippingView, SCTDrawerHeightListenerAnnouncer, SCTV3ELMDraggingContext, SCTV3ELMGradientView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface SCTV3ExpandedLocalMediaController : NSObject
{
    id <SCTV3ExpandedLocalMediaControllerDelegate> _delegate;
    id <SCTCameraServices> _cameraServices;
    id <SCTV3ChatServices> _chatServices;
    id <SCTV3LensesServices> _lensesServices;
    id <SCTalkUIController> _talkUIController;
    UIView *_localVideoView;
    SCNoHitClippingView *_pane;
    UIView *_dimmedView;
    SCTV3ELMGradientView *_gradientView;
    SCTDrawerHeightListenerAnnouncer *_heightAnnouncer;
    UIPanGestureRecognizer *_dimmedViewPanGestureRecognizer;
    UIPanGestureRecognizer *_videoViewPanGestureRecognizer;
    UILongPressGestureRecognizer *_videoViewLongPressGestureRecognizer;
    SCTV3ELMDraggingContext *_draggingContext;
    UITapGestureRecognizer *_singleTapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    SCGrowingButton *_flipCameraButton;
    SCGrowingButton *_dismissButton;
    UIView *_lensesCarousel;
    UIView *_lensesLabel;
    _Bool _expandOnLocalVideoTap;
    _Bool _expanded;
    long long _viewingMode;
}

@property(nonatomic) long long viewingMode; // @synthesize viewingMode=_viewingMode;
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) SCTDrawerHeightListenerAnnouncer *heightAnnouncer; // @synthesize heightAnnouncer=_heightAnnouncer;
- (void).cxx_destruct;
- (void)panGestureRecognized:(id)arg1;
- (void)_fadeInGradient;
- (void)_resetBackgroud;
- (void)_videoViewLongPressed:(id)arg1;
- (void)_setExpandedVideoViewGesturesEnabled:(_Bool)arg1;
- (void)_videoViewDoubleTapped;
- (void)_videoViewSingleTapped:(id)arg1;
- (id)_videoView;
- (void)_destroyLensesLabel;
- (void)_placeLensesLabel;
- (void)_initLensesLabelIfNeeded;
- (void)_destroyLensesCarousel;
- (void)_initLensesCarouselIfNeeded;
- (void)_dimmedViewTapped:(id)arg1;
- (void)_dismissButtonPressed;
- (void)_flipCameraButtonPressed;
- (void)_destroyButtons;
- (void)_initButtonsIfNeeded;
- (id)_inPlaceShrinkMeasurements;
- (void)_animateWithDirection:(id)arg1 measurements:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_prepareAnimationWithDirection:(id)arg1 measurements:(id)arg2;
- (void)_shrinkTo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_expandFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shrinkInPlaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)expandInPlaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)shrinkTo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)expandFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setExpandOnLocalVideoTap:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 cameraServices:(id)arg2 chatServices:(id)arg3 lensesServices:(id)arg4 talkUIContoller:(id)arg5 groupConversation:(_Bool)arg6;

@end

