//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCActionModel, SCDiscoverFeedDebugViewModel, SCDiscoverFeedDynamicReplayOverlayViewModel, SCDiscoverFeedLabelOverlayViewModel, SCDiscoverFeedLogoOverlayViewModel, SCDiscoverFeedPublisherStoryLabelOverlayViewModel, SCDiscoverFeedStoryLoggingInfo, SCNetworkImage, SCSearchNetworkVideo, UIColor;

@interface SCDiscoverFeedStoryViewModelBuilder : NSObject
{
    unsigned long long _storyDedupeFp;
    _Bool _showTopRightSubscriptionIcon;
    _Bool _isLive;
    _Bool _hasUnseenStorySnap;
    NSString *_bannerText;
    SCActionModel *_primarySingleTapActionModel;
    SCActionModel *_secondarySingleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCActionModel *_debugActionModel;
    SCNetworkImage *_imageThumbnail;
    SCNetworkImage *_firstFrameOfVideoThumbnail;
    SCSearchNetworkVideo *_videoThumbnail;
    _Bool _enableVideoThumbnailBounce;
    SCDiscoverFeedDebugViewModel *_debugViewModel;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    UIColor *_primaryColor;
    UIColor *_cornerColor;
    struct CGSize _preferredCardSize;
    _Bool _enableReplayOverlay;
    SCDiscoverFeedLabelOverlayViewModel *_labelOverlayViewModel;
    SCDiscoverFeedDynamicReplayOverlayViewModel *_dynamicReplayOverlayViewModel;
    SCDiscoverFeedLogoOverlayViewModel *_logoOverlayViewModel;
    SCDiscoverFeedPublisherStoryLabelOverlayViewModel *_publisherStoryLabelOverlayViewModel;
}

+ (id)discoverFeedStoryViewModelFromExistingDiscoverFeedStoryViewModel:(id)arg1;
+ (id)discoverFeedStoryViewModel;
- (void).cxx_destruct;
- (id)withPublisherStoryLabelOverlayViewModel:(id)arg1;
- (id)withLogoOverlayViewModel:(id)arg1;
- (id)withDynamicReplayOverlayViewModel:(id)arg1;
- (id)withLabelOverlayViewModel:(id)arg1;
- (id)withEnableReplayOverlay:(_Bool)arg1;
- (id)withPreferredCardSize:(struct CGSize)arg1;
- (id)withCornerColor:(id)arg1;
- (id)withPrimaryColor:(id)arg1;
- (id)withStoryLoggingInfo:(id)arg1;
- (id)withDebugViewModel:(id)arg1;
- (id)withEnableVideoThumbnailBounce:(_Bool)arg1;
- (id)withVideoThumbnail:(id)arg1;
- (id)withFirstFrameOfVideoThumbnail:(id)arg1;
- (id)withImageThumbnail:(id)arg1;
- (id)withDebugActionModel:(id)arg1;
- (id)withScrollOutOfScreenActionModel:(id)arg1;
- (id)withLongPressActionModel:(id)arg1;
- (id)withSecondarySingleTapActionModel:(id)arg1;
- (id)withPrimarySingleTapActionModel:(id)arg1;
- (id)withBannerText:(id)arg1;
- (id)withHasUnseenStorySnap:(_Bool)arg1;
- (id)withIsLive:(_Bool)arg1;
- (id)withShowTopRightSubscriptionIcon:(_Bool)arg1;
- (id)withStoryDedupeFp:(unsigned long long)arg1;
- (id)build;

@end

