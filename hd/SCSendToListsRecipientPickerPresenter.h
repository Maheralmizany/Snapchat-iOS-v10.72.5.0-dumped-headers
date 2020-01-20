//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRecipientPickerDelegate.h"

@class NSSet, NSString, SCLazy, SCModalUIContainer, SCScopedAccess, SCSearchQueryResultController, SCSearchView, SCSendToListsAlertView, SCSendToListsRemoveListAlertView, SCSendToQuerySourceStateTracker, SCSnapchatter, UIViewController;

@interface SCSendToListsRecipientPickerPresenter : NSObject <SCRecipientPickerDelegate>
{
    UIViewController *_presentingViewController;
    id <SCSendToListsDataMutating> _listsDataMutator;
    id <SCSendToListsDataFetching> _listsDataFetcher;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_groupsDataFetcher;
    SCSearchView *_searchView;
    SCSearchQueryResultController *_queryResultController;
    SCSendToQuerySourceStateTracker *_querySourceStateTracker;
    SCModalUIContainer *_modalUIContainer;
    SCScopedAccess *_recipientPickerLauncher;
    SCSnapchatter *_userSnapchatter;
    CDUnknownBlockType _selectionGroupGenerator;
    SCSendToListsAlertView *_listsAlertView;
    SCSendToListsRemoveListAlertView *_removeListAlertView;
    NSString *_listNameBeingEdited;
    _Bool _listEditingInProgress;
    NSSet *_allowedListNameEmojiSet;
}

- (void).cxx_destruct;
- (id)_listNameFromHeader:(id)arg1;
- (void)_upsertListWithListName:(id)arg1 selectedItems:(id)arg2;
- (void)_selectTextFieldWithTextField:(id)arg1;
- (_Bool)_shouldCheckForAlreadyUsedListNameWithNewListName:(id)arg1;
- (void)_presentAlreadyUsedListNameAlertWithListName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentRemoveListAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentInvalidListNameAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)didPressTopRightButtonWithHeader:(id)arg1 uiContainer:(id)arg2;
- (void)didDismissWithSelectedItems:(id)arg1 header:(id)arg2;
- (void)didConfirmWithSelectedItems:(id)arg1 header:(id)arg2;
- (void)presentCreateList;
- (void)presentEditListWithListId:(id)arg1;
- (void)setSearchView:(id)arg1;
- (void)setQueryResultController:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 listsDataMutator:(id)arg2 listsDataFetcher:(id)arg3 snapchattersDataFetcher:(id)arg4 groupsDataFetcher:(id)arg5 querySourceStateTracker:(id)arg6 userSnapchatter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

