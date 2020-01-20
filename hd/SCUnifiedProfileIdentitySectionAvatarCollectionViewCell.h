//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUnifiedProfileIdentityItemBaseCollectionCell.h"

#import "SCAvatarViewDelegate.h"

@class SCAvatarContainerView, SCLazy;

@interface SCUnifiedProfileIdentitySectionAvatarCollectionViewCell : SCUnifiedProfileIdentityItemBaseCollectionCell <SCAvatarViewDelegate>
{
    SCAvatarContainerView *_avatarContainerView;
    SCLazy *_typingBubbleView;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)viewModel;
- (void).cxx_destruct;
- (void)_updateTypingBubbleViewIfNecessaryWithAnimationState:(unsigned long long)arg1;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

