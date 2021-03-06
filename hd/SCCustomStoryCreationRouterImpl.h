//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCustomStoryCreationRouter.h"
#import "SCUnifiedActionMenuPresenterDelegate.h"
#import "SIGAlertDialogDelegate.h"

@class NSSet, NSString, SCLazy, SCScopeExposer, SCUnifiedActionMenuPresenter, SIGAlertDialog, UIViewController<SCUIContainer>;

@interface SCCustomStoryCreationRouterImpl : NSObject <SCUnifiedActionMenuPresenterDelegate, SIGAlertDialogDelegate, SCCustomStoryCreationRouter>
{
    UIViewController<SCUIContainer> *_uiContainer;
    SCScopeExposer *_recipientPickerScopeExposer;
    SCLazy *_userInfoProvider;
    NSString *_currentUsername;
    long long _sourcePageType;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    id <SCCustomStoryCreationActionMenuDelegate> _creationActionMenuDelegate;
    _Bool _didExplicitlyEndTypeSelection;
    CDUnknownBlockType _confirmationModelGenerator;
    NSSet *_sectionIdentifiers;
    _Bool _didSubmitName;
    SIGAlertDialog *_errorAlert;
    id <SCCustomStoryCreationErrorAlertDelegate> _errorAlertDelegate;
}

- (void).cxx_destruct;
- (void)beginStoryNameErrorDialogWithResponseCode:(long long)arg1 delegate:(id)arg2;
- (void)alertDialogDidDismiss:(id)arg1;
- (void)beginStoryNameSelectionWithStoryType:(unsigned long long)arg1 delegate:(id)arg2;
- (void)dismissMemberSelection;
- (void)completeMemberSelection;
- (void)beginCustomStoryMemberSelectionWithDelegate:(id)arg1;
- (void)beginPrivateStoryMemberSelectionWithDelegate:(id)arg1;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (void)endCustomStoryTypeSelection;
- (void)beginCustomStoryTypeSelectionWithDelegate:(id)arg1;
- (id)initWithUiContainer:(id)arg1 recipientPickerScopeExposer:(id)arg2 userInfoProvider:(id)arg3 currentUsername:(id)arg4 sourcePageType:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

