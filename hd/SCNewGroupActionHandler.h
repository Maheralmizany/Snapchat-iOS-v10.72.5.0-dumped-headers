//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCInvalidFriendAlertViewDelegate.h"

@class NSString, SCBaseAlertView, SCGroupLinkCreationAndDeletionActionHandler, SCInvalidFriendAlertView, SCLazy, SCMaxGroupSizeAlertView, SCNewGroupConfiguration, SCNewGroupCreateGroupLinkCTAActionHandler, SCSendToNewGroupDataRepository, SCSendToOpenMiniProfileActionHandler, SCSendToSelectionStateManager;

@interface SCNewGroupActionHandler : NSObject <SCInvalidFriendAlertViewDelegate, SCActionHandling>
{
    SCNewGroupConfiguration *_configuration;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataMutator;
    SCSendToOpenMiniProfileActionHandler *_openMiniProfileActionHandler;
    SCInvalidFriendAlertView *_invalidFriendAlertView;
    SCBaseAlertView *_teamsnapchatAlertView;
    SCMaxGroupSizeAlertView *_maxGroupSizeAlertView;
    SCSendToNewGroupDataRepository *_newGroupDataRepository;
    SCLazy *_userInfoProvider;
    SCNewGroupCreateGroupLinkCTAActionHandler *_createGroupLinkCTAActionHandler;
    SCGroupLinkCreationAndDeletionActionHandler *_createAndDeleteGroupLinkActionHandler;
    id <SCNewGroupViewControlling> _presentingViewController;
    id <SCNewGroupViewControllerDelegate> _delegate;
    NSString *_baseGroupId;
}

- (void).cxx_destruct;
- (unsigned long long)titleTypeForInvalidFriendAlertView;
- (void)showKeyboardIfNecessary:(_Bool)arg1;
- (void)_showInvalidFriendAlertWithName:(id)arg1;
- (void)_showTeamSnapchatAlert;
- (void)_showMaxGroupSizeAlert;
- (void)_newRecipientCountWithItemType:(long long)arg1 itemId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_lazyGroupLinkCreationAndDeletionHandler;
- (void)setBaseGroupId:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithConfiguration:(id)arg1 selectionStateManager:(id)arg2 snapchattersDataFetcher:(id)arg3 snapchattersDataMutator:(id)arg4 openMiniProfileActionHandler:(id)arg5 newGroupDataRepository:(id)arg6 userInfoProvider:(id)arg7 baseGroupId:(id)arg8 presentingViewController:(id)arg9 delegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

