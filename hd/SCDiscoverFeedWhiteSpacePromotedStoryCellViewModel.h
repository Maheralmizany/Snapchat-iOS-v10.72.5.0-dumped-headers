//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCActionModel, SCDiscoverFeedDebugViewModel, SCDiscoverFeedStoryLoggingInfo, SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel, SCDiscoverFeedWhiteSpaceHeadlineViewModel, SCDiscoverFeedWhiteSpaceProfileRowViewModel, SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel, SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel, UIColor;

@interface SCDiscoverFeedWhiteSpacePromotedStoryCellViewModel : NSObject <NSCopying>
{
    SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel *_publisherThumbnailViewModel;
    SCDiscoverFeedWhiteSpaceHeadlineViewModel *_headlineViewModel;
    SCDiscoverFeedWhiteSpaceProfileRowViewModel *_profileRowViewModel;
    SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel *_subscriptionIconViewModel;
    SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel *_postViewLayer;
    UIColor *_backgroundColor;
    SCActionModel *_singleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    NSString *_accessibilityLabel;
    SCDiscoverFeedDebugViewModel *_debugViewModel;
    SCActionModel *_debugActionModel;
    struct CGSize _preferredSize;
}

@property(readonly, copy, nonatomic) SCActionModel *debugActionModel; // @synthesize debugActionModel=_debugActionModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedDebugViewModel *debugViewModel; // @synthesize debugViewModel=_debugViewModel;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) SCActionModel *scrollOutOfScreenActionModel; // @synthesize scrollOutOfScreenActionModel=_scrollOutOfScreenActionModel;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *singleTapActionModel; // @synthesize singleTapActionModel=_singleTapActionModel;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel *postViewLayer; // @synthesize postViewLayer=_postViewLayer;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel *subscriptionIconViewModel; // @synthesize subscriptionIconViewModel=_subscriptionIconViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceProfileRowViewModel *profileRowViewModel; // @synthesize profileRowViewModel=_profileRowViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceHeadlineViewModel *headlineViewModel; // @synthesize headlineViewModel=_headlineViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpacePublisherThumbnailViewModel *publisherThumbnailViewModel; // @synthesize publisherThumbnailViewModel=_publisherThumbnailViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPublisherThumbnailViewModel:(id)arg1 headlineViewModel:(id)arg2 profileRowViewModel:(id)arg3 subscriptionIconViewModel:(id)arg4 postViewLayer:(id)arg5 preferredSize:(struct CGSize)arg6 backgroundColor:(id)arg7 singleTapActionModel:(id)arg8 longPressActionModel:(id)arg9 scrollOutOfScreenActionModel:(id)arg10 storyLoggingInfo:(id)arg11 accessibilityLabel:(id)arg12 debugViewModel:(id)arg13 debugActionModel:(id)arg14;

@end

