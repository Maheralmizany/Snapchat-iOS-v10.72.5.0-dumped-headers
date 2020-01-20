//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCInvalidFriendAlertViewDelegate.h"
#import "SCUserSelectionListener.h"

@class NSString, SCLazy, SCPreviewTooltipBalloon, SCSearchContentViewControllerContext, SCSearchMultiStateView, SCSearchNavigationBarButtonItem, SCSendToDocObjectRecipientDataSource, SCSendToSelectionStateManager, SCUserSession, UIView;

@interface SCSendToGroupButtonController : NSObject <SCInvalidFriendAlertViewDelegate, SCUserSelectionListener>
{
    SCUserSession *_userSession;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    SCSearchMultiStateView *_rightBarGroupButtonView;
    SCSearchMultiStateView *_rightBarAddFriendButtonView;
    SCSearchMultiStateView *_rightBarShareSnapButtonView;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    id <SCSendToGroupButtonControllerDelegate> _groupButtonDelegate;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCLazy *_groupsDataCreator;
    SCLazy *_groupsDataMutator;
    SCPreviewTooltipBalloon *_tooltip;
    id <SCStartChatDelegate> _startChatDelegate;
    SCSearchNavigationBarButtonItem *_barAddFriendButtonItem;
    SCSearchNavigationBarButtonItem *_barGroupButtonItem;
    UIView *_barGroupButton;
    SCSearchNavigationBarButtonItem *_barShareSnapButtonItem;
}

@property(retain, nonatomic) SCSearchNavigationBarButtonItem *barShareSnapButtonItem; // @synthesize barShareSnapButtonItem=_barShareSnapButtonItem;
@property(retain, nonatomic) UIView *barGroupButton; // @synthesize barGroupButton=_barGroupButton;
@property(retain, nonatomic) SCSearchNavigationBarButtonItem *barGroupButtonItem; // @synthesize barGroupButtonItem=_barGroupButtonItem;
@property(retain, nonatomic) SCSearchNavigationBarButtonItem *barAddFriendButtonItem; // @synthesize barAddFriendButtonItem=_barAddFriendButtonItem;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
- (void).cxx_destruct;
- (void)_updateTooltipText;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (void)_updateGroupButtonInSearchBar:(_Bool)arg1;
- (void)_shareSnapButtonPressed;
- (void)_createGroupButtonPressed;
- (void)_addFriendButtonPressed;
- (id)_shareSnapButton;
- (void)hideCreateGroupTooltip;
- (void)_showCreateGroupTooltip:(id)arg1;
- (id)_groupCreateButtonV11;
- (id)_groupCreateButton;
- (id)_growingGroupCreateButton;
- (id)_addFriendButton;
- (void)presentCreateGroupView;
- (unsigned long long)titleTypeForInvalidFriendAlertView;
- (void)showKeyboardIfNecessary:(_Bool)arg1;
- (void)updateMischiefHeaderIfNeeded;
- (id)initWithUserSession:(id)arg1 groupButtonDelegate:(id)arg2 docObjectRecipientDataSource:(id)arg3 searchContentViewControllerContext:(id)arg4 selectionStateManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

