//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCSendToAppStoryActionHandler.h"

@class NSString, SCSendToSelectionStateManager, SCSendToStoriesDataSource, SCUserSession, UIViewController<SCSearchContentViewControlling>;

@interface SCSendToAppStoryActionHandlerImpl : NSObject <SCActionHandling, SCSendToAppStoryActionHandler>
{
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSendToStoriesDataSource *_storiesDataSource;
    SCUserSession *_userSession;
    UIViewController<SCSearchContentViewControlling> *_presentingViewController;
}

@property(nonatomic) __weak UIViewController<SCSearchContentViewControlling> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_setSelectionStateForItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (void)_showAuthorizationMenuForAppStoryInDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleConnectFromSnapchatWithApplicationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSelectAppStoryForDataModel:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 selectionStateManager:(id)arg2 storiesDataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
