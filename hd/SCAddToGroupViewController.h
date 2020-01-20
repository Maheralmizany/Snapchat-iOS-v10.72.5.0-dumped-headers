//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCAddToGroupViewDelegate.h"
#import "SCBlockedExceptionAlertControllerDelegate.h"
#import "SCChatViewHeaderDataSource.h"
#import "SCGroupMiniProfileViewControllerDelegate.h"
#import "SCGroupsDataRequestListener.h"
#import "SCHeaderDelegate.h"
#import "SCInvalidFriendAlertViewDelegate.h"
#import "SCMiniProfileViewControllerDelegate.h"
#import "SCPageNameLogging.h"
#import "SCRecipientBarDelegate.h"
#import "SCTraceEnabled.h"
#import "SwipeView.h"
#import "UIAlertViewDelegate.h"

@class FBKVOController, NSArray, NSMutableArray, NSString, SCAddToGroupView, SCChatViewHeader, SCGroupFilter, SCInvalidFriendAlertView, SCLazy, SCMaxGroupSizeAlertView, SCRecipientBar, SCRegisterV2EnterButton, SCUserSession, UIView;

@interface SCAddToGroupViewController : UIViewController <SCGroupsDataRequestListener, SCTraceEnabled, UIAlertViewDelegate, SCRecipientBarDelegate, SCAddToGroupViewDelegate, SCChatViewHeaderDataSource, SCHeaderDelegate, SwipeView, SCBlockedExceptionAlertControllerDelegate, SCInvalidFriendAlertViewDelegate, SCMiniProfileViewControllerDelegate, SCGroupMiniProfileViewControllerDelegate, SCPageNameLogging>
{
    SCUserSession *_userSession;
    unsigned long long _chatCreationType;
    SCAddToGroupView *_addToGroupView;
    UIView *_confirmationButtonView;
    SCRegisterV2EnterButton *_confirmationButton;
    SCRegisterV2EnterButton *_arroyoConfirmationButton;
    double _keyboardHeight;
    NSMutableArray *_recipients;
    NSArray *_flattenFriends;
    NSArray *_friends;
    NSArray *_friendKeys;
    NSArray *_allGroups;
    NSArray *_relatedGroups;
    NSArray *_filteredGroups;
    NSArray *_filteredFriends;
    NSArray *_bestFriends;
    NSArray *_recents;
    NSArray *_friendsAndNamedGroups;
    NSArray *_friendAndNamedGroupKeys;
    FBKVOController *_kvoController;
    SCGroupFilter *_groupFilter;
    NSString *_filterString;
    SCInvalidFriendAlertView *_invalidFriendAlertView;
    SCLazy *_blockedExceptionAlertVC;
    SCMaxGroupSizeAlertView *_maxGroupSizeAlertView;
    id <SCChatGroup> _baseGroup;
    NSString *_temporaryGroupName;
    _Bool _isNavigatingStraightToGroup;
    double _startViewingTime;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_groupsDataMutator;
    _Bool _dismissed;
    NSString *_baseGroupId;
    id <SCAddToGroupViewControllerDelegate> _addToGroupDelegate;
    SCRecipientBar *_recipientBar;
    SCChatViewHeader *_header;
}

@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(readonly, nonatomic) SCChatViewHeader *header; // @synthesize header=_header;
@property(readonly, nonatomic) SCRecipientBar *recipientBar; // @synthesize recipientBar=_recipientBar;
@property(nonatomic) __weak id <SCAddToGroupViewControllerDelegate> addToGroupDelegate; // @synthesize addToGroupDelegate=_addToGroupDelegate;
@property(retain, nonatomic) NSString *baseGroupId; // @synthesize baseGroupId=_baseGroupId;
- (void).cxx_destruct;
- (void)_logChatPageChatCreateViewWithExitEvent:(long long)arg1 didSelectGroup:(_Bool)arg2;
- (_Bool)isCreatingGroupAfterTappingRecipientBar;
- (unsigned long long)chatCreationType;
- (void)headerTextFieldTextEditingDidEnd;
- (void)headerTextFieldTextEditingDidBegin;
- (void)_startNewOneOnOneChatRecipientSelection;
- (void)_resetToNewChatState;
- (void)_filterResults:(id)arg1;
- (unsigned long long)titleTypeForInvalidFriendAlertView;
- (void)showKeyboardIfNecessary:(_Bool)arg1;
- (void)_showInvalidFriendAlertWithName:(id)arg1;
- (void)_showTeamSnapchatAlert;
- (void)_showMaxGroupSizeAlert;
- (_Bool)shouldGoStraightToChat;
- (_Bool)_canGroupChatWithFriend:(id)arg1;
- (void)didGrantBlockExceptionForGroup:(id)arg1;
- (void)_didChatWithFriendFromMiniProfile:(id)arg1 deepLinkURL:(id)arg2;
- (void)_didChatWithUserIdFromMiniProfile:(id)arg1 deepLinkURL:(id)arg2;
- (void)groupMiniProfileController:(id)arg1 wantsToNavigateToChatForFriend:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupMiniProfileControllerDidUpdateGroup:(id)arg1;
- (void)groupMiniProfileControllerDidPressSnapButton:(id)arg1;
- (void)groupMiniProfileControllerDidPressChatButton:(id)arg1;
- (void)miniProfileViewControllerDidPressSnapButton:(id)arg1;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)_reloadFriendsAndNamedGroups;
- (void)reloadGroupsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetGroupFilter;
- (void)reloadRecentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)friendDidDelete:(id)arg1;
- (void)reloadForChatCreationTypeChange;
- (void)startNewGroupChatRecipientSelectionFromCreationType:(unsigned long long)arg1;
- (void)presentBlockedExceptionsAlertView:(id)arg1;
- (void)presentMiniProfileForGroup:(id)arg1;
- (void)presentMiniProfileForFriend:(id)arg1;
- (id)allGroups;
- (id)relatedGroups;
- (id)recents;
- (id)bestFriends;
- (id)filteredGroups;
- (id)filteredFriends;
- (id)allPotentialRecipientSectionKeys;
- (id)allPotentialRecipients;
- (_Bool)isFriendInBaseGroup:(id)arg1;
- (_Bool)isSearching;
- (id)recipients;
- (id)currentFriendSuggestion;
- (id)currentFilterText;
- (void)showInput;
- (void)hideInput;
- (id)_mutableSnapchattersForParticipants:(id)arg1;
- (void)didSelectGroup:(id)arg1;
- (void)didChangeHeight:(double)arg1;
- (id)getSuggestion:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)_updateGroupsWithRecipients;
- (void)_removeRecipient:(id)arg1;
- (void)_addRecipient:(id)arg1;
- (_Bool)_isAddingToGroupChat;
- (_Bool)attemptRemoveRecipient:(id)arg1 sender:(id)arg2 section:(id)arg3;
- (_Bool)attemptAddRecipient:(id)arg1 sender:(id)arg2 section:(id)arg3;
- (void)leftButtonPressed;
- (void)rightButtonPressed;
- (void)_setRecipientsWithSnapchatters:(id)arg1;
- (void)setRecipientUserIds:(id)arg1;
- (void)_dismiss:(_Bool)arg1;
- (void)dismiss;
- (double)borderThickness;
- (id)borderColor;
- (_Bool)shouldShowEditableHeader;
- (_Bool)isInChatCreationMode;
- (_Bool)isInPreviewMode;
- (id)chatRecipientUsername;
- (_Bool)_isRTL;
- (double)_pencilIconPadding;
- (id)iconForPlaceholderAttributedString;
- (id)imageForXButtonInState:(unsigned long long)arg1;
- (id)_imageForRightDismissButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)fontForPlaceholderInHeader;
- (id)fontForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)_titleForArroyoConfirmationButton;
- (id)titleForConfirmationButton;
- (id)_titleForHeaderFromRecipientBar;
- (id)titleForHeader:(id)arg1;
- (id)tintColorForHeader;
- (id)backgroundColorForHeader;
- (void)addRecipientsToGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)arroyoConfirmationButtonPressed;
- (void)confirmationButtonPressed;
- (void)didBecomeActive:(id)arg1;
- (void)keyboardWillChange:(id)arg1 willShow:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutForRecipientBarChange;
- (_Bool)_shouldEnableArroyoChatButton;
- (_Bool)_shouldEnableChatButton;
- (long long)_recipientsNeededForChatButton;
- (_Bool)_shouldShowArroyoChatButton;
- (_Bool)_shouldShowChatButton;
- (void)updateChatButton;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)initConfirmationButton;
- (void)layoutAddToGroupViewTop;
- (void)initAddToGroupView;
- (void)layoutRecipientBar;
- (void)initRecipientBar;
- (void)_recipientBarHeightDidChange:(id)arg1;
- (void)loadView;
- (id)getPageViewType;
- (id)pageViewName;
- (id)initWithUserSession:(id)arg1 creationType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

