//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMaskedMediaThumbnailViewModel.h"
#import "SCChatSingleMediaThumbnailViewModel.h"

@class NSDate, NSString, SCBaseMediaThumbnailViewModel, SCSearchStoryMediaCardViewModel, UIColor;

@interface SCSearchStoryMessageThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel, SCChatMaskedMediaThumbnailViewModel>
{
    _Bool _isSendingOrHasFailed;
    NSDate *_storyTimestamp;
    long long _viewableStatus;
    SCBaseMediaThumbnailViewModel *_baseMediaThumbnailViewModel;
    SCSearchStoryMediaCardViewModel *_searchStoryMediaCardViewModel;
    UIColor *_senderColor;
}

+ (id)_storyInfoLabelFont;
+ (id)_unviewableLabelFont;
@property(readonly, nonatomic) UIColor *senderColor; // @synthesize senderColor=_senderColor;
@property(readonly, nonatomic) SCSearchStoryMediaCardViewModel *searchStoryMediaCardViewModel; // @synthesize searchStoryMediaCardViewModel=_searchStoryMediaCardViewModel;
@property(readonly, nonatomic) SCBaseMediaThumbnailViewModel *baseMediaThumbnailViewModel; // @synthesize baseMediaThumbnailViewModel=_baseMediaThumbnailViewModel;
- (void).cxx_destruct;
- (_Bool)_isExpired;
- (_Bool)_isViewable;
- (_Bool)shouldDisplayStoryInfoLabel;
- (_Bool)shouldDisplayUnviewableLabel;
- (id)attributedTextForUnviewableLabel;
- (id)attributedTextForStoryInfoLabel;
- (_Bool)shouldCropCircularMedia;
- (_Bool)shouldShowFullScreenView;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)containsVideo;
- (void)_configureWithSearchMetadata:(id)arg1;
- (id)initWithSearchStoryMetadata:(id)arg1 storyMediaContent:(id)arg2 isSendingOrHasFailed:(_Bool)arg3 senderColor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
