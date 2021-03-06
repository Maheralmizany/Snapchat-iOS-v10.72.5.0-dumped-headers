//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCUnifiedProfileViewControllerDelegate.h"

@class NSString, SCCognacBlizzardEventLoggingController, SCCognacDataStorage, SCCognacIAPMockPremiumContentHandler, SCCognacIAPPremiumContentHandler, SCCognacServiceCoordinator, SCCognacSwipeTransitionPresenter, UIViewController;

@interface SCCognacChatDrawerCollectionViewSectionActionHandler : NSObject <SCUnifiedProfileViewControllerDelegate, SCActionHandling>
{
    SCCognacDataStorage *_cognacDataStorage;
    SCCognacServiceCoordinator *_cognacServiceCoordinator;
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
    id <SCGroupManager> _groupManager;
    SCCognacSwipeTransitionPresenter *_swipePresenter;
    id <SCImageDownloading> _imageDownloader;
    SCCognacIAPPremiumContentHandler *_premiumContentHandler;
    SCCognacIAPMockPremiumContentHandler *_mockPremiumContentHandler;
    UIViewController *_presentingViewController;
    id <SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate> _delegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SCGroupManager> groupManager; // @synthesize groupManager=_groupManager;
@property(readonly, nonatomic) SCCognacBlizzardEventLoggingController *eventLoggingController; // @synthesize eventLoggingController=_eventLoggingController;
- (void).cxx_destruct;
- (void)_handleGetAppCompleteForMessageButtonWithAppDataModel:(id)arg1 conversationId:(id)arg2 resetLoadingState:(CDUnknownBlockType)arg3 context:(unsigned long long)arg4;
- (void)didTapOnCognacMessageViewButton:(id)arg1;
- (void)_launchAppInstanceWithAppId:(id)arg1 conversationId:(id)arg2 cell:(id)arg3 resetLoadingState:(CDUnknownBlockType)arg4 context:(unsigned long long)arg5;
- (void)_tryToLaunchWithAppId:(id)arg1 conversationId:(id)arg2 cell:(id)arg3;
- (void)_handleWithSender:(id)arg1 tapActionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)dismissProfileViewController:(id)arg1;
- (void)_showGameProfile:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithDataStorage:(id)arg1 serviceCoordinator:(id)arg2 presentingViewController:(id)arg3 eventLoggingController:(id)arg4 groupManager:(id)arg5 imageDownloader:(id)arg6 delegate:(id)arg7 premiumContentHandler:(id)arg8 mockPremiumContentHandler:(id)arg9;
- (void)logCognacDrawerTapEventWithConversationId:(id)arg1 appId:(id)arg2 tileState:(long long)arg3 hasActiveAppInstance:(_Bool)arg4 isNewApp:(_Bool)arg5 isUpdatedApp:(_Bool)arg6 ranking:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

