//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaInterstitialLayerView.h"

@class CAShapeLayer, SCLazy, SCPieView, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface SCOperaOptOutInterstitialLayerView : SCOperaInterstitialLayerView
{
    UIVisualEffectView *_blurredEffectView;
    UIView *_storyThumbnailContainerView;
    SCLazy *_storyThumbnailView;
    UIView *_xButtonContainerView;
    UIView *_subtitleContainerView;
    UILabel *_subtitleLabel;
    UILabel *_subtitleSuffixLabel;
    SCPieView *_pieView;
    _Bool _didBeginEndTouchDownAnimation;
    CAShapeLayer *_shapeLayer;
    _Bool _isAnimationPaused;
    UIImageView *_xButtonImageView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImageView *xButtonImageView; // @synthesize xButtonImageView=_xButtonImageView;
- (void).cxx_destruct;
- (void)pauseThumbnailMediaPlaybackIfNeccesary;
- (void)startThumbnailMediaPlaybackIfNeccesary;
- (void)cancelTouchDownAnimation;
- (void)endTouchDownAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginTouchDownAnimation;
- (void)beginButtonTouchDownAnimation:(id)arg1;
- (void)updateWithHorizontalOffset:(double)arg1;
- (void)_replaceSubtitleWithText:(id)arg1 hideSuffix:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replaceSubtitleWithText:(id)arg1 hideSuffix:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)_point:(struct CGPoint)arg1 inButtonContainerView:(id)arg2;
- (id)buttonViewForTouchPoint:(struct CGPoint)arg1;
- (void)_showStoryBitmojiAvatarViewWithImageDownloader:(id)arg1;
- (void)setupViewForLayer:(id)arg1;
- (void)_layoutSubtitleLabel;
- (void)layoutTitleLabel;
- (struct CGRect)_getThumbnailImageViewSuggestedFrameWithThumbnailViewSize:(struct CGSize)arg1;
- (struct CGRect)_getThumbnailImageViewSuggestedFrame;
- (void)layoutThumbnailView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

