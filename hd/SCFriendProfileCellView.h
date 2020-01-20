//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCAddFriendButtonV2Delegate.h"
#import "SCProfilePictureThumbnailDelegate.h"

@class NSString, SCAddFriendActionBundleView, SCFriendProfileCellConfiguration, SCFriendProfileCellTextView, SCFriendProfileCellTextViewV2, SCFriendmojiView, SCProfilePictureThumbnail, UIButton;

@interface SCFriendProfileCellView : UIView <SCProfilePictureThumbnailDelegate, SCAddFriendButtonV2Delegate>
{
    UIView *_thumbnailContainer;
    UIView *_emojiContainer;
    UIView *_buttonContainer;
    UIView *_xButtonContainer;
    UIView *_buttonEmojiContainer;
    UIButton *_xButton;
    _Bool _isDarkTheme;
    SCProfilePictureThumbnail *_profilePictureThumbnail;
    SCFriendProfileCellTextView *_textView;
    SCFriendProfileCellTextViewV2 *_textViewV2;
    SCFriendmojiView *_friendMojiView;
    NSString *_curPublicFriendStoriesUsername;
    SCAddFriendActionBundleView *_addfriendActionBundleView;
    SCFriendProfileCellConfiguration *_configuration;
    id <SCFriendProfileCellViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)didDisplayProfilePictureOnThumbnail:(id)arg1 friend:(id)arg2;
- (void)buttonV2Pressed:(id)arg1 friend:(id)arg2;
- (_Bool)pointBeforeButtonContainer:(struct CGPoint)arg1 inView:(id)arg2;
- (_Bool)didDisplayProfilePicture;
- (void)setMinRightOffset;
- (void)setDefaultRightOffset;
- (void)setTextLeftPadding:(double)arg1;
- (void)setRightOffset:(double)arg1;
- (void)setLeftOffset:(double)arg1;
- (void)_updateWithMainLabel:(id)arg1 subLabel:(id)arg2 thirdLabel:(id)arg3 showOfficialBadge:(_Bool)arg4 style:(long long)arg5;
- (_Bool)_shouldShowHintLabel;
- (id)_newFriendActionButtonsGroupConfiguration;
- (void)updateButtonWithState:(long long)arg1 friend:(id)arg2 style:(long long)arg3;
- (void)xButtonPressed;
- (void)_updateWithXButton:(_Bool)arg1;
- (void)_updateWithMainLabel:(id)arg1 subLabel:(id)arg2 showOfficialBadge:(_Bool)arg3 style:(long long)arg4;
- (void)_updateEmojiViewWithFriend:(id)arg1;
- (void)_updateThumbnailWithFriend:(id)arg1 contexts:(id)arg2 renderStyle:(id)arg3;
- (void)prepareForReuse;
- (id)friend;
- (void)updateCellViewWithConfiguration:(id)arg1;
- (id)initWithDarkTheme:(_Bool)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
