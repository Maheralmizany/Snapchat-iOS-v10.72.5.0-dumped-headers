//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"
#import "SCUnifiedProfileTransitionCoordinatorDataSource.h"
#import "SCUnifiedProfileTransitionCoordinatorDelegate.h"
#import "SCUnifiedProfileViewControllerDelegate.h"

@class NSString, SCUnifiedProfileTransitionCoordinator, SCUnifiedProfileViewController, SCUserSession, UIViewController;

@interface SCUnifiedProfilePresenter : NSObject <SCUnifiedProfileTransitionCoordinatorDataSource, SCUnifiedProfileTransitionCoordinatorDelegate, SCUnifiedProfileViewControllerDelegate, SCTraceEnabled>
{
    SCUserSession *_userSession;
    UIViewController *_presentingViewController;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
    SCUnifiedProfileTransitionCoordinator *_profileTransitionCoordinator;
    unsigned long long _unifiedProfileProfileType;
    NSString *_sourcePageName;
    id <SCUnifiedProfilePresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedProfilePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)profileViewWillDisappear:(id)arg1;
- (void)profileViewDidAppear:(id)arg1;
- (void)profileViewWillAppear:(id)arg1;
- (void)profileViewDidLoad:(id)arg1;
- (void)dismissProfileViewController:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dismissProfileViewController:(id)arg1;
- (void)transitionCoordinator:(id)arg1 didCancelWithTransitionType:(unsigned long long)arg2;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (void)_didDismissUnifiedProfile;
- (void)_presentUnifiedViewController:(id)arg1 profileType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentSnapchatterProfileWithSnapchatter:(id)arg1 configuration:(id)arg2 startChatDelegate:(id)arg3 navigationDelegate:(id)arg4 lifecycleListener:(id)arg5 friendProfilePageActionHandlerDelegate:(id)arg6 openningData:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)presentGroupProfileWithDataSource:(id)arg1 navigationDelegate:(id)arg2 startChatDelegate:(id)arg3 lifecycleListener:(id)arg4 groupProfilePageActionHandlerDelegate:(id)arg5 openningData:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)presentSnapchatterProfileWithDataSource:(id)arg1 startChatDelegate:(id)arg2 navigationDelegate:(id)arg3 lifecycleListener:(id)arg4 friendProfilePageActionHandlerDelegate:(id)arg5 openningData:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)dismissUnifiedProfileAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissUnifiedProfile;
- (void)presentNonFriendProfileWithSnapchatter:(id)arg1 configuration:(id)arg2 startChatDelegate:(id)arg3 navigationDelegate:(id)arg4 lifecycleListener:(id)arg5 friendProfilePageActionHandlerDelegate:(id)arg6 openningData:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)presentFriendProfileWithUserId:(id)arg1 configuration:(id)arg2 snapchattersDataFetcher:(id)arg3 startChatDelegate:(id)arg4 navigationDelegate:(id)arg5 lifecycleListener:(id)arg6 friendProfilePageActionHandlerDelegate:(id)arg7 openningData:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)presentGroupProfileWithGroupId:(id)arg1 navigationDelegate:(id)arg2 startChatDelegate:(id)arg3 lifecycleListener:(id)arg4 groupProfilePageActionHandlerDelegate:(id)arg5 openningData:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
