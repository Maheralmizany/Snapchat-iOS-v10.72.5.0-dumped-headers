//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMaskedMediaThumbnailViewModel.h"
#import "SCChatSingleMediaThumbnailViewModel.h"

@class NSDate, NSString, SCBaseMediaThumbnailViewModel, SCContributionStoryPublisherDataModel, SCSnapchatter, UIColor;

@interface SCStorySnapMessageThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel, SCChatMaskedMediaThumbnailViewModel>
{
    _Bool _isSendingOrHasFailed;
    long long _viewableStatus;
    _Bool _isExpired;
    NSDate *_storyTimestamp;
    NSString *_subtext;
    SCSnapchatter *_snapchatter;
    _Bool _addFriendTapped;
    _Bool _isMutalFriend;
    SCContributionStoryPublisherDataModel *_contributionStoryPublisher;
    SCBaseMediaThumbnailViewModel *_baseMediaThumbnailViewModel;
    UIColor *_senderColor;
}

+ (id)_mediaCardPlaceholderLabelColor;
+ (id)_mediaCardPlaceholderLabelFont;
+ (id)_storyInfoLabelFont;
+ (id)_unviewableLabelFont;
+ (id)_blurLabelFont;
+ (id)grayChatColor;
+ (long long)mediaCardLoadStateFromMediaContentLoadState:(long long)arg1;
@property(readonly, nonatomic) UIColor *senderColor; // @synthesize senderColor=_senderColor;
@property(readonly, nonatomic) SCBaseMediaThumbnailViewModel *baseMediaThumbnailViewModel; // @synthesize baseMediaThumbnailViewModel=_baseMediaThumbnailViewModel;
- (void).cxx_destruct;
- (_Bool)shouldCropCircularMedia;
- (_Bool)shouldShowFullScreenView;
- (_Bool)containsVideo;
- (id)attributedTextForMediaCardPlaceholderLabel;
- (id)attributedTextForStoryInfoLabel;
- (id)attributedTextForUnviewableLabel;
- (id)userDisplayName;
- (id)attributedTextForBlurLabel;
- (id)contributionStoryPublisherMediaCardViewModel;
- (id)snapchatterNameCardViewModel;
- (_Bool)shouldDisplayTapToLoad;
- (_Bool)shouldDisplayStoryInfoLabel;
- (_Bool)shouldDisplayUnviewableLabel;
- (_Bool)shouldDisplayBlurView;
- (id)initWithChatMetadata:(id)arg1 isSendingOrHasFailed:(_Bool)arg2 senderColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

