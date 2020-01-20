//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SCAlertViewConfig, SCAlertViewFlow;

@interface SCBaseAlertView : UIView
{
    UIView *_contentView;
    UIView *_separatorView;
    NSArray *_contentItems;
    SCAlertViewConfig *_configuration;
    NSArray *_actions;
    UIView *_accessoryView;
    UIView *_rightAccessoryView;
    double _accessoryViewOverlapRatio;
    SCAlertViewFlow *_alertViewFlow;
    CDUnknownBlockType _dismissHandler;
    struct UIEdgeInsets _rightAccessoryViewInsets;
}

+ (id)alertViewWithTitle:(id)arg1 description:(id)arg2 lensIcon:(id)arg3 actions:(id)arg4 configuration:(CDUnknownBlockType)arg5 dismissHandler:(CDUnknownBlockType)arg6;
+ (id)_onboardingDialogWithActions:(id)arg1 userSession:(id)arg2 sourceType:(long long)arg3 linkDelegate:(id)arg4 openSettingsAction:(CDUnknownBlockType)arg5;
+ (id)ignoredMultipleLocationRequestsDialogWithActions:(id)arg1;
+ (id)cannotShareBecauseNotFriendsWithEntireGroupDialogWithGroupName:(id)arg1 actions:(id)arg2;
+ (id)onboardToShareLocationDialogWithGroupName:(id)arg1 actions:(id)arg2 userSession:(id)arg3 sourceType:(long long)arg4 linkDelegate:(id)arg5 openSettingsAction:(CDUnknownBlockType)arg6;
+ (id)requestLocationFromGroupWithBlacklistedFriendsConfirmationWithCompletion:(CDUnknownBlockType)arg1;
+ (id)shareLocationDialogForGroupName:(id)arg1 audienceType:(long long)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(CDUnknownBlockType)arg5;
+ (id)requestLocationConfirmationDialogWithFriendName:(id)arg1 actions:(id)arg2;
+ (id)onboardToShareLocationDialogWithFriendName:(id)arg1 actions:(id)arg2 userSession:(id)arg3 sourceType:(long long)arg4 linkDelegate:(id)arg5 openSettingsAction:(CDUnknownBlockType)arg6;
+ (id)shareLocationCompletionDialogForFriendName:(id)arg1 description:(id)arg2 actions:(id)arg3 openSettingsAction:(CDUnknownBlockType)arg4 bitmojiHeaderView:(id)arg5;
+ (id)shareLocationDialogForFriendName:(id)arg1 audienceType:(long long)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(CDUnknownBlockType)arg5 bitmojiHeaderView:(id)arg6;
+ (id)shareLocationDialogForFriendName:(id)arg1 audienceType:(long long)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(CDUnknownBlockType)arg5;
+ (id)_descriptionForLeavingGhostModeToShareWithGroupWithAudience:(long long)arg1;
+ (id)_descriptionForLeavingGhostModeWithAudience:(long long)arg1 friendName:(id)arg2;
+ (id)exitGhostModeAndShareLocationDialogForGroupName:(id)arg1 audienceType:(long long)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(CDUnknownBlockType)arg5;
+ (id)exitGhostModeAndShareLocationDialogForFriendName:(id)arg1 audienceType:(long long)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(CDUnknownBlockType)arg5;
+ (id)shareLocationDialogWithTitle:(id)arg1 hasSeparator:(_Bool)arg2 contentViews:(id)arg3 actions:(id)arg4 openSettingsAction:(CDUnknownBlockType)arg5 bitmojiHeaderView:(id)arg6;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(nonatomic) __weak SCAlertViewFlow *alertViewFlow; // @synthesize alertViewFlow=_alertViewFlow;
@property(readonly, nonatomic) SCAlertViewConfig *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) double accessoryViewOverlapRatio; // @synthesize accessoryViewOverlapRatio=_accessoryViewOverlapRatio;
@property(nonatomic) struct UIEdgeInsets rightAccessoryViewInsets; // @synthesize rightAccessoryViewInsets=_rightAccessoryViewInsets;
@property(retain, nonatomic) UIView *rightAccessoryView; // @synthesize rightAccessoryView=_rightAccessoryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
- (void).cxx_destruct;
- (double)incrementAlertViewSizeHeightForActions:(id)arg1;
- (void)layoutButtons:(id)arg1 contentItems:(id)arg2 contentView:(id)arg3 textButtonPadding:(double)arg4 standardWidth:(double)arg5;
- (struct CGSize)getContentItemSize:(struct CGSize)arg1 contentItemSize:(struct CGSize)arg2 contentItem:(id)arg3;
- (double)getViewSizeWidth;
- (double)getStandardWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) NSArray *actionViews;
- (_Bool)becomeFirstResponder;
- (id)initWithContentItems:(id)arg1 actions:(id)arg2 configuration:(CDUnknownBlockType)arg3 dismissHandler:(CDUnknownBlockType)arg4;

@end

