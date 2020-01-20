//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataCoordinatorListener.h"
#import "SCFeedDataSource.h"

@class NSArray, NSDictionary, NSString, SCArroyoConversationIdsManager, SCCheetahFeedDebugManager, SCLazy;

@interface SCClearFeedDataSource : NSObject <SCDataCoordinatorListener, SCFeedDataSource>
{
    NSArray *_clearableViewModels;
    NSDictionary *_clearableViewModelIndexes;
    id <SCPerforming> _performer;
    NSString *_username;
    SCLazy *_lazyFriendsFeedDataCoordinator;
    SCArroyoConversationIdsManager *_arroyoConversationIdsManager;
    id <SCClearFeedDataSourceDelegate> _delegate;
    SCCheetahFeedDebugManager *_debugManager;
}

@property(readonly, nonatomic) SCCheetahFeedDebugManager *debugManager; // @synthesize debugManager=_debugManager;
@property(nonatomic) __weak id <SCClearFeedDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateForViewDidFullyDisappear;
- (void)_reloadFeed;
- (void)_updateViewModelsAndReload:(id)arg1;
- (void)_updateWithFeedItems:(id)arg1;
- (void)_updateViewModels;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (long long)indexForFeedId:(id)arg1;
- (id)viewModels;
- (id)cachedViewModels;
- (void)feedWillReload;
- (id)initWithUsername:(id)arg1 friendsFeedDataCoordinator:(id)arg2 arroyoConversationIdsManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool searching;
@property(readonly) Class superclass;
@property(nonatomic) long long type;
@property(nonatomic) long long unreadConversationCount;

@end

