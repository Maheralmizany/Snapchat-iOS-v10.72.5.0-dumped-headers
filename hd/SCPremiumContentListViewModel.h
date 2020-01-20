//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCActionModel, SCDiscoverFeedDebugViewModel, SCDiscoverFeedDynamicReplayOverlayViewModel, SCDiscoverFeedLabelOverlayViewModel, SCDiscoverFeedPublisherStoryProgressBarViewModel, SCDiscoverFeedStoryLoggingInfo, SCDiscoverFeedWhiteSpaceProfileRowViewModel, SCNetworkImage;

@interface SCPremiumContentListViewModel : NSObject <NSCopying>
{
    _Bool _shouldShowSubscriptionIcon;
    SCActionModel *_primarySingleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCActionModel *_debugActionModel;
    SCNetworkImage *_imageThumbnail;
    SCNetworkImage *_firstFrameOfVideoThumbnail;
    unsigned long long _storyViewCount;
    SCDiscoverFeedDebugViewModel *_debugViewModel;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    SCDiscoverFeedLabelOverlayViewModel *_labelOverlayViewModel;
    SCDiscoverFeedWhiteSpaceProfileRowViewModel *_profileRowViewModel;
    SCDiscoverFeedPublisherStoryProgressBarViewModel *_progressBarViewModel;
    SCDiscoverFeedDynamicReplayOverlayViewModel *_dynamicReplayOverlayViewModel;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedDynamicReplayOverlayViewModel *dynamicReplayOverlayViewModel; // @synthesize dynamicReplayOverlayViewModel=_dynamicReplayOverlayViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedPublisherStoryProgressBarViewModel *progressBarViewModel; // @synthesize progressBarViewModel=_progressBarViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceProfileRowViewModel *profileRowViewModel; // @synthesize profileRowViewModel=_profileRowViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedLabelOverlayViewModel *labelOverlayViewModel; // @synthesize labelOverlayViewModel=_labelOverlayViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) SCDiscoverFeedDebugViewModel *debugViewModel; // @synthesize debugViewModel=_debugViewModel;
@property(readonly, nonatomic) unsigned long long storyViewCount; // @synthesize storyViewCount=_storyViewCount;
@property(readonly, nonatomic) _Bool shouldShowSubscriptionIcon; // @synthesize shouldShowSubscriptionIcon=_shouldShowSubscriptionIcon;
@property(readonly, copy, nonatomic) SCNetworkImage *firstFrameOfVideoThumbnail; // @synthesize firstFrameOfVideoThumbnail=_firstFrameOfVideoThumbnail;
@property(readonly, copy, nonatomic) SCNetworkImage *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
@property(readonly, copy, nonatomic) SCActionModel *debugActionModel; // @synthesize debugActionModel=_debugActionModel;
@property(readonly, copy, nonatomic) SCActionModel *scrollOutOfScreenActionModel; // @synthesize scrollOutOfScreenActionModel=_scrollOutOfScreenActionModel;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *primarySingleTapActionModel; // @synthesize primarySingleTapActionModel=_primarySingleTapActionModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimarySingleTapActionModel:(id)arg1 longPressActionModel:(id)arg2 scrollOutOfScreenActionModel:(id)arg3 debugActionModel:(id)arg4 imageThumbnail:(id)arg5 firstFrameOfVideoThumbnail:(id)arg6 shouldShowSubscriptionIcon:(_Bool)arg7 storyViewCount:(unsigned long long)arg8 debugViewModel:(id)arg9 storyLoggingInfo:(id)arg10 labelOverlayViewModel:(id)arg11 profileRowViewModel:(id)arg12 progressBarViewModel:(id)arg13 dynamicReplayOverlayViewModel:(id)arg14;

@end

