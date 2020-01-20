//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "FFPlayerViewDelegate.h"

@class FFPlayerView, NSString, UIActivityIndicatorView, UIImage, UIImageView, UIView;

@interface SPPreviewsScenarioCell : UICollectionViewCell <FFPlayerViewDelegate>
{
    _Bool _showBorder;
    _Bool _showWhiteMask;
    _Bool _showVolumeIcon;
    _Bool _volumeEnabled;
    _Bool _sindleTapShouldWaitDoubleTapFail;
    _Bool _isHighlightAnimationInProgress;
    id <SPPreviewsPlayableCellOutput> _playableOutput;
    UIView *_containerView;
    id <FFPlayerItem> _videoItem;
    UIImage *_thumbnail;
    FFPlayerView *_playerView;
    UIActivityIndicatorView *_loadIndicator;
    UIView *_whiteMask;
    UIImageView *_thumbnailView;
    UIImageView *_volumeIconImageView;
}

@property(nonatomic) _Bool isHighlightAnimationInProgress; // @synthesize isHighlightAnimationInProgress=_isHighlightAnimationInProgress;
@property(retain, nonatomic) UIImageView *volumeIconImageView; // @synthesize volumeIconImageView=_volumeIconImageView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *whiteMask; // @synthesize whiteMask=_whiteMask;
@property(retain, nonatomic) UIActivityIndicatorView *loadIndicator; // @synthesize loadIndicator=_loadIndicator;
@property(retain, nonatomic) FFPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool sindleTapShouldWaitDoubleTapFail; // @synthesize sindleTapShouldWaitDoubleTapFail=_sindleTapShouldWaitDoubleTapFail;
@property(nonatomic) _Bool volumeEnabled; // @synthesize volumeEnabled=_volumeEnabled;
@property(nonatomic) _Bool showVolumeIcon; // @synthesize showVolumeIcon=_showVolumeIcon;
@property(nonatomic) _Bool showWhiteMask; // @synthesize showWhiteMask=_showWhiteMask;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) id <FFPlayerItem> videoItem; // @synthesize videoItem=_videoItem;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SPPreviewsPlayableCellOutput> playableOutput; // @synthesize playableOutput=_playableOutput;
- (void).cxx_destruct;
- (double)scaleAnimationDurationWith:(_Bool)arg1;
- (double)borderAnimationDurationWith:(_Bool)arg1;
- (void)_updateVolumeIcon;
- (void)_refreshLoadIndicator;
- (void)_scaleCellForHighlightedState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ffPlayerView:(id)arg1 didChangePlayState:(_Bool)arg2;
- (void)clean;
- (void)exitVisibleState;
- (void)enterVisibleState;
@property(nonatomic) long long thumbnailContentMode;
- (void)prepareForReuse;
- (void)setShowBorder:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

