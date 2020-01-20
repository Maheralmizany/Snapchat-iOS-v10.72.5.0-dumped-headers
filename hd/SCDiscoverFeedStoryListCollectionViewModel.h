//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, SCActionModel, SCDiscoverFeedStoryCircleViewModel, SCDiscoverFeedStoryLoggingInfo, SCSearchActionButtonViewModel;

@interface SCDiscoverFeedStoryListCollectionViewModel : NSObject <NSCopying>
{
    SCDiscoverFeedStoryCircleViewModel *_storyCircleViewModel;
    NSAttributedString *_displayLabel;
    NSAttributedString *_actionSubtext;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
    SCSearchActionButtonViewModel *_actionButtonViewModel;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    struct CGSize _preferredSize;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *actionButtonViewModel; // @synthesize actionButtonViewModel=_actionButtonViewModel;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) NSAttributedString *actionSubtext; // @synthesize actionSubtext=_actionSubtext;
@property(readonly, copy, nonatomic) NSAttributedString *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryCircleViewModel *storyCircleViewModel; // @synthesize storyCircleViewModel=_storyCircleViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryCircleViewModel:(id)arg1 displayLabel:(id)arg2 actionSubtext:(id)arg3 tapActionModel:(id)arg4 longPressActionModel:(id)arg5 preferredSize:(struct CGSize)arg6 actionButtonViewModel:(id)arg7 storyLoggingInfo:(id)arg8;

@end

