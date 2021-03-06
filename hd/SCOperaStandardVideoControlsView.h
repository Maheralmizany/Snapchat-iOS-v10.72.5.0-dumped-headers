//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaVideoControlsView.h"

#import "UIGestureRecognizerDelegate.h"

@class CAGradientLayer, NSString, SCGrowingButton, UIButton, UIColor, UILabel, UILongPressGestureRecognizer, UIView;

@interface SCOperaStandardVideoControlsView : SCOperaVideoControlsView <UIGestureRecognizerDelegate>
{
    UIButton *_audioButton;
    UILabel *_elapsedTimeLabel;
    UIView *_elapsedTimeTracker;
    UIView *_elapsedTimeBackground;
    double _elapsedTimePercent;
    double _elapsedTimeLabelRightPadding;
    UIButton *_rotateVideoButton;
    UIButton *_playPauseButton;
    UIButton *_captionButton;
    UIColor *_primaryColor;
    UILongPressGestureRecognizer *_seekGesture;
    UIView *_seekGestureView;
    SCGrowingButton *_exitButton;
    double _exitButtonXOffsetWhenRotated;
    UIButton *_showActionMenuButton;
    _Bool _showActionMenuButtonEnabled;
    UIView *_elapsedTimeDot;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
}

+ (id)formatTime:(double)arg1;
@property(readonly, nonatomic) UIView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg1;
- (void)cleanUp;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateElapsedTimeRightPadding:(double)arg1 animated:(_Bool)arg2;
- (void)setRotateButtonVisible:(_Bool)arg1;
- (void)toggleAudioButton:(_Bool)arg1;
- (void)toggleCaptionButton:(_Bool)arg1;
- (void)toggleRotateLeftButton:(_Bool)arg1;
- (void)togglePlayButton:(_Bool)arg1;
- (void)showActionMenuButtonPressed;
- (void)exitButtonPressed;
- (void)seekElapsedTimeWithXOffset:(double)arg1;
- (void)didSeek:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)captionButtonPressed;
- (void)rotateButtonPressed;
- (void)audioButtonPressed;
- (void)playPauseButtonPressed;
- (void)adjustForTime:(double)arg1;
- (void)layoutSubviews;
- (_Bool)isPauseButtonON;
- (void)_setupCaptionButton;
- (void)_setupRotateButton;
- (void)_setupPlayPauseButton;
- (void)_setupAudioButton;
- (void)_setupBottomBar;
- (void)_setupShowActionMenuButton;
- (void)_setupExitButton;
- (void)_updateElapsedTimeDotSizeForState:(long long)arg1;
- (void)_setupElapsedTimeDot;
- (void)_setupElapsedTimeTracker;
- (id)_primaryDisplayColor;
- (void)_setupElapsedTimeBackground;
- (void)_setupElapsedTimeLabel;
- (void)_setupGradientViews;
- (void)_setupElapsedTimeView;
- (void)_setUpView;
- (void)updateWithPrimaryColor:(id)arg1 showActionMenuButtonEnabled:(_Bool)arg2;
- (id)initWithPrimaryColor:(id)arg1 showActionMenuButtonEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

