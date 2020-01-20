//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

#import "SCAddFriendButtonViewModel.h"
#import "SCAvatarViewDelegate.h"
#import "SCMiniProfileStorySubscribeButtonDelegate.h"

@class Friend, NSString, SCAddFriendButtonV2, SCAvatarView, SCMiniProfileStorySubscribeButton, UIColor, UILabel;

@interface SCMiniProfileFriendCollectionViewCell : SCMiniProfileCollectionViewCell <SCAddFriendButtonViewModel, SCMiniProfileStorySubscribeButtonDelegate, SCAvatarViewDelegate>
{
    SCAvatarView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    SCAddFriendButtonV2 *_addButton;
    SCMiniProfileStorySubscribeButton *_subscribeButton;
    long long _colorStyle;
    UIColor *_subscribeButtonColor;
    Friend *_friend;
    id <SCMiniProfileFriendCollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)miniProfileStorySubscribeButtonDidTap:(id)arg1;
- (id)_subscribeButtonViewModelForFriend:(id)arg1;
- (_Bool)_shouldReverseColorForCurrentStyle:(_Bool)arg1;
- (id)_imageForIsSubscribed:(_Bool)arg1;
- (id)_subscribeButtonImageForSubscribed;
- (id)_subscribeButtonImageForUnsubscribed;
- (long long)buttonStyle;
- (long long)buttonState;
- (id)friend;
- (void)buttonV2Pressed:(id)arg1 friend:(id)arg2;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)_onLongPress:(id)arg1;
- (void)_updateDescriptionWithUsername:(id)arg1 scoreString:(id)arg2 friendmoji:(id)arg3;
- (void)setFriend:(id)arg1 userSession:(id)arg2 hideStory:(_Bool)arg3 delegate:(id)arg4;
- (void)setColorStyle:(long long)arg1;
- (void)_updateLabelsBackgroundColor;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

