//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCEventAnnouncing.h"
#import "SCEventListener.h"
#import "SCImageViewOptimizable.h"
#import "SCViewModelConfigurable.h"

@class NSString, SCBitmojiAvatarContainerViewModel, SCEventListenerAnnouncer, SCLazy;

@interface SCBitmojiAvatarContainerView : UIView <SCEventAnnouncing, SCEventListener, SCViewModelConfigurable, SCImageViewOptimizable>
{
    SCLazy *_bitmojiAvatarView;
    SCLazy *_groupBitmojiAvatarView;
    SCLazy *_bitmojiAccessoryAvatarView;
    unsigned long long _typingAnimationState;
    SCEventListenerAnnouncer *_eventAnnouncer;
    unsigned long long _optimizationOptions;
    SCBitmojiAvatarContainerViewModel *_viewModel;
    id <SCImageDownloading> _imageDownloader;
    struct CGSize _preferredImageSize;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCBitmojiAvatarContainerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long optimizationOptions; // @synthesize optimizationOptions=_optimizationOptions;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
- (void).cxx_destruct;
- (void)_animateBitmojiAccessoryAvatarViewWithAnimationState:(unsigned long long)arg1 isGroupBitmoji:(_Bool)arg2;
- (void)_hideBitmojiAccessoryIfNecessaryWithAnimationState:(unsigned long long)arg1 isGroupBitmoji:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showBitmojiAccessoryAvatarView;
- (void)_showGroupBitmojiView;
- (void)_showBitmojiView;
- (id)bitmojiView;
- (void)_setViewModelAfterHidingBitmojiAccessory:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
