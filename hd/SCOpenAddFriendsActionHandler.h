//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"

@class NSString, SCContactSyncWorkFlow, SCLazy, SCScopedAccess, SCSendToTransitionProvider, SCUserSession, UIViewController;

@interface SCOpenAddFriendsActionHandler : NSObject <SCActionHandling>
{
    SCUserSession *_userSession;
    NSString *_sourcePageName;
    SCSendToTransitionProvider *_transitionProvider;
    SCContactSyncWorkFlow *_contactSyncWorkFlow;
    SCScopedAccess *_snapchattersDataFetcher;
    SCLazy *_presentAddFriendsIntentHandler;
    UIViewController *_presentingController;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
}

@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak UIViewController *presentingController; // @synthesize presentingController=_presentingController;
- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1;
- (void)_presentMyContactPage;
- (void)_presentContactSyncFlow;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingController:(id)arg1 startChatDelegate:(id)arg2 navigationDelegate:(id)arg3 userSession:(id)arg4 sourcePageName:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

