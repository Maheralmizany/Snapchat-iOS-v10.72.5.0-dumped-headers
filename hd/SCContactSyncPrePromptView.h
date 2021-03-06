//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCAddFriendsInterstitialView.h"
#import "SCTraceEnabled.h"

@class NSString, SCFindFriendsCTAImageProvider, SCPrePromptPermissionCustomDialogView, TTTAttributedLabel, UIButton, UIImage, UIImageView;

@interface SCContactSyncPrePromptView : UIView <SCTraceEnabled, SCAddFriendsInterstitialView>
{
    SCPrePromptPermissionCustomDialogView *_dialogView;
    UIImageView *_backgroundImageView;
    UIImage *_originalBackgroundImage;
    SCFindFriendsCTAImageProvider *_imageProvider;
    UIButton *_skipButton;
    long long _viewType;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    CDUnknownBlockType _dontAllowButtonHandler;
    _Bool _isGrayScale;
    TTTAttributedLabel *_privacyPolicyLabel;
}

@property(nonatomic) _Bool isGrayScale; // @synthesize isGrayScale=_isGrayScale;
@property(retain, nonatomic) TTTAttributedLabel *privacyPolicyLabel; // @synthesize privacyPolicyLabel=_privacyPolicyLabel;
- (void).cxx_destruct;
- (_Bool)hasDenyButton;
- (_Bool)hasAllowButton;
- (void)_skipButtonPressed:(id)arg1;
- (void)_initPrivacyPolicyLabel;
- (void)_initSkipButtonIfNeeded;
- (void)_initDialogViewWithAllowButtonHandler:(CDUnknownBlockType)arg1 denyButtonHandler:(CDUnknownBlockType)arg2;
- (void)_initBackgroundImageViewIfNeeded;
- (_Bool)_isGhostImageNeeded;
- (_Bool)_isSkipButtonNeeded;
- (_Bool)_isBackgroundImageViewNeeded;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(long long)arg2 allowButtonHandler:(CDUnknownBlockType)arg3 denyButtonHandler:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 allowButtonHandler:(CDUnknownBlockType)arg2 denyButtonHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

