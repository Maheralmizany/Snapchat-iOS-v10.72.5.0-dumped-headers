//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCFriendUnifiedProfileActionMenuActionHandlerDelegate.h"
#import "SCUnifiedActionMenuPresenterDelegate.h"

@class NSString, SCFeatureSettingsManager, SCFriendUnifiedProfileDataSource, SCUnifiedActionMenuPresenter, UIViewController;

@interface SCFriendUnifiedProfileActionMenuPresentingActionHandler : NSObject <SCUnifiedActionMenuPresenterDelegate, SCFriendUnifiedProfileActionMenuActionHandlerDelegate, SCActionHandling>
{
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCFeatureSettingsManager *_featureSettingsManager;
    UIViewController *_presentingViewController;
    id <SCFriendUnifiedProfileActionMenuPresentingActionHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCFriendUnifiedProfileActionMenuPresentingActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)handleActionFromUnifiedProfileActionMenuForActionHandler:(id)arg1 actionModel:(id)arg2;
- (void)dismissUnifiedProfileActionMenuForActionHandler:(id)arg1;
- (void)unifiedActionMenuPresenterWillDismiss:(id)arg1;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (id)_storyActionMenuDataProvider;
- (id)_actionMenuDataProvider;
- (void)_presentMenuViewWithDataProvider:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)presentedViewController;
- (id)initWithFriendUnifiedProfileDataSource:(id)arg1 featureSettingsManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

