//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCMotionManagerListener.h"
#import "SCOperaFadeTransitionCompatibleViewController.h"
#import "SCOperaLayerViewControllerMediaContainer.h"
#import "SCOperaLayerViewControllerShareableMediaSource.h"
#import "SCOperaMediaLogViewable.h"
#import "SCOperaPinchGestureCompatibleViewController.h"
#import "SCOperaRotatingLayerPinchControllerDelegate.h"
#import "SCOperaVideoViewControllingDataSource.h"
#import "SCOperaVideoViewControllingDelegate.h"

@class AVAsset, AVPlayerItemTrack, CADisplayLink, FBKVOController, NSError, NSNotificationCenter, NSString, NSTimer, SCAVPlayerVolumeController, SCFrameableContainerView, SCOperaRotatingLayerPinchController, SCOperaRotatingVideoLayerView, SCOperaVideoStallTracker, SCStopwatch, UIGestureRecognizer, UIView, UIVisualEffectView;

@interface SCOperaRotatingVideoLayerViewController : SCOperaLayerViewController <SCMotionManagerListener, SCOperaRotatingLayerPinchControllerDelegate, SCOperaVideoViewControllingDelegate, SCOperaVideoViewControllingDataSource, SCOperaMediaLogViewable, SCOperaFadeTransitionCompatibleViewController, SCOperaLayerViewControllerMediaContainer, SCOperaLayerViewControllerShareableMediaSource, SCOperaPinchGestureCompatibleViewController>
{
    SCOperaRotatingVideoLayerView *_layerView;
    SCFrameableContainerView *_containerView;
    struct CGRect _viewBounds;
    FBKVOController *_kvoController;
    NSNotificationCenter *_notificationCenter;
    _Bool _fullyViewed;
    _Bool _isLooping;
    _Bool _hasSentMediaStartsToPlayEvent;
    _Bool _hasFullyAppearedOnScreen;
    double _durationSec;
    SCStopwatch *_mediaDisplayStopWatch;
    id _videoTimeObserver;
    _Bool _isSeeking;
    NSTimer *_controlsFadeTimer;
    long long _virtualOrientation;
    UIGestureRecognizer *_tapGesture;
    struct CGVector _lastTranslation;
    double _lastRotation;
    double _lastScale;
    double _delayedTargetVolume;
    double _minRollDegree;
    double _maxRollDegree;
    _Bool _pausedForAttachment;
    UIVisualEffectView *_blurView;
    SCOperaRotatingLayerPinchController *_pinchController;
    _Bool _shouldRestoreToOppositeState;
    _Bool _isListeningForMotionUpdates;
    double _pinchToZoomFirstTimeSec;
    long long _lastPlaybackFailureType;
    NSError *_lastPlaybackError;
    _Bool _didRecoverFromPlayerItemError;
    _Bool _didRecoverFromMediaServiceError;
    _Bool _videoIsInErrorState;
    _Bool _videoWasPreparedWhenFullyAppeared;
    _Bool _didRetryOnFrozenVideo;
    _Bool _shouldStartPlaybackOnceReadyToPlay;
    CADisplayLink *_videoFrameRateTrackingDisplayLink;
    double _frameRateStartTrackingTime;
    long long _frameRateTrackedTimes;
    double _totalFrameRate;
    double _nominalFrameRate;
    double _timeToPrepareSec;
    double _startPreparingTimeSec;
    NSTimer *_mediaLogTimer;
    AVAsset *_videoAsset;
    AVPlayerItemTrack *_frameRateVideoTrack;
    SCAVPlayerVolumeController *_volumeController;
    _Bool _videoShouldBePlaying;
    SCOperaVideoStallTracker *_stallTracker;
    _Bool _isShowingLoadingIndicator;
    UIView *_pinchGestureTarget;
}

+ (id)layerViewControllerWithConfiguration:(id)arg1 kvoController:(id)arg2 mediaDisplayStopwatch:(id)arg3 eventAnnouncer:(id)arg4 sharedResourceManager:(id)arg5 notificationCenter:(id)arg6;
@property(nonatomic) __weak UIView *pinchGestureTarget; // @synthesize pinchGestureTarget=_pinchGestureTarget;
- (void).cxx_destruct;
- (id)mediaLog;
- (void)_enableLoadingIndicator:(_Bool)arg1;
- (void)_updateLoadingIndicator;
- (void)_playerDidResumeFromStall:(id)arg1;
- (void)_playerDidStall:(id)arg1;
- (void)_resumeForBufferStatusChangeIfNecessary;
- (void)_observePlayerViewForStreamingIfNecessary:(id)arg1;
- (void)_setUpCloseToAutoAdvanceNotificationIfNecessary;
- (void)_stopTrackingVideoFrameRate;
- (void)_frameRateTrackingDisplayLinkDidFire;
- (void)_startTrackingVideoFrameRate;
- (void)_clearPlaybackErrorTrackingParams;
- (void)_updatePlaybackErrorTrackingParams;
- (void)_sendMediaFailsToDisplayEvent;
- (void)_playerDidFailToPlay;
- (id)fadingViewsForFadeTransition;
- (id)movingViewsForFadeTransition;
- (CDStruct_1b6d18a9)_duration;
- (CDStruct_1b6d18a9)_currentTime;
- (CDStruct_1b6d18a9)videoControlsViewDuration:(id)arg1;
- (CDStruct_1b6d18a9)videoControlsViewCurrentTime:(id)arg1;
- (void)_updateRollDegreeWithCurrentRotation:(double)arg1;
- (void)motionManager:(id)arg1 didUpdateRotation:(double)arg2 translation:(struct CGVector)arg3;
- (void)_updateScale:(double)arg1;
- (void)_notifyScaleChange:(double)arg1;
- (void)operaRotatingLayerPinchController:(id)arg1 updateTransformWithScale:(double)arg2;
- (void)operaRotatingLayerPinchController:(id)arg1 didFinishPinchWithScale:(double)arg2;
- (void)setProgress:(double)arg1 forIndex:(unsigned long long)arg2;
- (void)seekToTime:(double)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)seekToTime:(double)arg1;
- (void)seekToMediaStartTimeWithCompletion:(CDUnknownBlockType)arg1;
- (void)videoControlsViewDidPressSendButton:(id)arg1;
- (void)videoControlsViewDidPressShowActionMenuButton:(id)arg1;
- (void)videoControlsView:(id)arg1 didSeekToTime:(double)arg2 reason:(long long)arg3;
- (void)videoControlsViewDidPressExit:(id)arg1;
- (void)videoControlsView:(id)arg1 didEndSeekingWithPlayButtonToggled:(_Bool)arg2;
- (void)videoControlsViewDidBeginSeeking:(id)arg1;
- (void)videoControlsView:(id)arg1 didTogglePlay:(_Bool)arg2;
- (void)_rotateVideoWithTransform:(struct CGAffineTransform)arg1;
- (void)_setTargetOrientation:(long long)arg1 andRotateView:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleControlsVisibility:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleRotateLeft:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleCaption:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleVolume:(_Bool)arg2;
- (void)_toggleVideoControlsView;
- (void)handleTap:(id)arg1;
- (void)_setupMediaLoggerTimer;
- (void)_setupControlsFadeTimer;
- (void)_fadeOutControlsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fadeOutControls;
- (void)_fadeInControls;
- (id)videoAsset;
- (id)_player;
- (_Bool)_shouldLoopWhenReachEnd;
- (_Bool)_shouldAutoAdvanceWhenReachEnd;
- (void)playerItemDidReachEnd:(id)arg1;
- (_Bool)isOverlay;
- (double)mediaHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)_removeTimeObserver;
- (void)_attachTimeObserver;
- (void)_updateLayout;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)loadView;
- (id)shareableMedia;
- (id)currentViewParameters;
- (void)_updateResumeTime;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)fadeVolumeOut:(double)arg1;
- (void)fadeVolumeIn:(double)arg1;
- (void)setVolume:(double)arg1;
- (void)teardown;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (void)_didStartToPlay;
- (void)resume;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)pause;
- (void)_tearDownPlayerView;
- (void)_stopPlayback;
- (void)viewDidFullyDisappear;
- (_Bool)_shouldShowVideoControls;
- (void)_removeCircularMask:(id)arg1;
- (void)_applyCircularMask:(id)arg1 diagonal:(double)arg2 xOffset:(double)arg3 yOffset:(double)arg4;
- (void)_updateCircularMask:(_Bool)arg1;
- (void)_setupPinchController;
- (void)_setupControlsIfNecessary;
- (void)_sendMediaStartsToDisplayIfNecessary;
- (void)_startPlayingItem:(id)arg1;
- (void)_startPlayingFromMediaStartTimeForItem:(id)arg1;
- (void)_resetVideoAsset:(_Bool)arg1;
- (void)_restartPlayer:(_Bool)arg1;
- (void)_updatePlayerStatusBasedOnPlayerItemStatus:(id)arg1;
- (void)_addMediaServicesResetRecoveryBlock:(CDUnknownBlockType)arg1;
- (void)_didReceiveMediaServicesWereResetNotification;
- (void)_didReceiveMediaServicesWereLostNotification;
- (void)_observeMediaServicesLostSharedResourceVariable;
- (void)updatePlayerItem:(id)arg1;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)_loadPlayerViewIfNecessary;
- (void)viewDidFullyAppear;
- (void)cancelViewWillFullyAppearAtTime;
- (void)viewWillFullyAppearAtTime:(CDStruct_1b6d18a9)arg1;
- (void)viewWillFullyAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 kvoController:(id)arg2 mediaDisplayStopwatch:(id)arg3 eventAnnouncer:(id)arg4 sharedResourceManager:(id)arg5 notificationCenter:(id)arg6;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

