//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AVPlayer, FBKVOController, SCChatMediaDrawerBaseMedia, SCPlayerView, UIImageView, UILabel, UIView;

@interface SCChatMediaDrawerCollectionViewCell : UICollectionViewCell
{
    UIImageView *_thumbnailView;
    UIView *_selectWhiteOverlayView;
    UIImageView *_checkImageView;
    SCPlayerView *_videoView;
    AVPlayer *_player;
    FBKVOController *_videoObserveController;
    UILabel *_videoDurationLabel;
    SCChatMediaDrawerBaseMedia *_media;
    id <SCChatMediaDrawerCollectionViewCellDelegate> _delegate;
}

+ (id)cellSeletedBackgroundColor;
+ (id)cellDefaultBackgroundColor;
+ (id)highlightedBorderColor;
@property(nonatomic) __weak id <SCChatMediaDrawerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCChatMediaDrawerBaseMedia *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (void)_setupVideoThumbnailLabelIfNeeded:(double)arg1;
- (double)animatedImagesTimeIntervalWithDuration:(double)arg1 frameCount:(long long)arg2;
- (void)_playVideoWithPlayerItem:(id)arg1;
- (void)setUpVideo;
- (void)pauseVideoIfNecessary;
- (void)playVideoIfNecessary;
- (void)resetPlayer;
- (void)playerItemDidReachEnd:(id)arg1;
- (id)videoView;
- (id)player;
- (void)applyDeselectedState;
- (void)applySelectedState;
- (void)animateSelected:(_Bool)arg1;
- (void)reloadThumbnail;
- (void)_handleSetMediaThumbnailFetchWithMedia:(id)arg1 image:(id)arg2;
- (void)cleanVideoView;
- (void)cleanThumbnailView;
- (void)cleanCheckImageView;
- (void)resetContent;
- (void)prepareForReuse;
- (id)checkImageView;
- (void)initThumbnailView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
