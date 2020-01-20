//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCGradientView, UIButton;

@interface SCOperaWSVideoControlsView : UIView
{
    SCGradientView *_bottomGradientView;
    UIButton *_audioButton;
    UIButton *_playPauseButton;
    UIButton *_rotateVideoButton;
    UIButton *_captionButton;
    UIView *_elapsedTimeBackground;
    UIView *_elapsedTimeTracker;
    float _elapsedTimePercent;
    _Bool _videoHasSubtitle;
    _Bool _videoHasClosedCaption;
    _Bool _isPortraitMode;
    id <SCOperaWSVideoControlsViewDelegate> _delegate;
}

@property(nonatomic) _Bool isPortraitMode; // @synthesize isPortraitMode=_isPortraitMode;
@property(nonatomic) _Bool videoHasClosedCaption; // @synthesize videoHasClosedCaption=_videoHasClosedCaption;
@property(nonatomic) _Bool videoHasSubtitle; // @synthesize videoHasSubtitle=_videoHasSubtitle;
@property(nonatomic) __weak id <SCOperaWSVideoControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captionButtonPressed;
- (void)rotateButtonPressed;
- (void)audioButtonPressed;
- (void)playPauseButtonPressed;
- (void)setRotateButtonVisible:(_Bool)arg1;
- (void)toggleAudioButton:(_Bool)arg1;
- (void)toggleCaptionButton:(_Bool)arg1;
- (void)toggleRotateLeftButton:(_Bool)arg1;
- (void)togglePlayButton:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_setupElapsedTimeView;
- (void)_setupCaptionButton;
- (void)_setupRotateButton;
- (void)_setupPlayPauseButton;
- (void)_setupAudioButton;
- (void)_setupGradientView;
- (void)_setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

