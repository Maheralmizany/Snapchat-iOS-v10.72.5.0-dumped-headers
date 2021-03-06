//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensExplorerFactoryProtocol.h"

@class NSMutableDictionary, NSString, SCLazy, SCLensExplorerActionHandlerFactory, SCLensExplorerDataStoreFactory, SCLensExplorerEventsControllerManager, SCLensExplorerLensCellViewModelDataProviderFactory, SCLensExplorerPerformanceLogger, SCLensExplorerQueryCoordinatorFactory, SCLensExplorerSectionDebugInfoProvider, SCLensExplorerSectionIndexProvider, SCLensExplorerUnlockFlow, SCLensExplorerUserSettings;

@interface SCLensExplorerFactory : NSObject <SCLensExplorerFactoryProtocol>
{
    id <SCLensExplorerDependencyProviderProtocol> _dependencyProvider;
    SCLazy *_lensExplorerRouter;
    SCLensExplorerEventsControllerManager *_eventControllerManager;
    SCLensExplorerLensCellViewModelDataProviderFactory *_viewModelDataProviderFactory;
    SCLensExplorerUnlockFlow *_lensExplorerLensUnlocker;
    SCLensExplorerUserSettings *_userSettings;
    SCLensExplorerQueryCoordinatorFactory *_queryCoordinatorFactory;
    SCLensExplorerSectionDebugInfoProvider *_debugInfoProvider;
    SCLensExplorerActionHandlerFactory *_actionHandlerFactory;
    id <SCLensExplorerBaseViewModelDataProvider> _lensChallengesViewModelDataProvider;
    SCLensExplorerSectionIndexProvider *_sectionIndexProvider;
    SCLensExplorerDataStoreFactory *_dataStoreFactory;
    SCLensExplorerPerformanceLogger *_performanceLogger;
    NSMutableDictionary *_lensItemQueryProviders;
}

- (void).cxx_destruct;
- (void)reset;
- (id)lensItemQueryProviderWithCategory:(unsigned long long)arg1;
@property(readonly, nonatomic) SCLensExplorerDataStoreFactory *dataStoreFactory;
@property(readonly, nonatomic) SCLensExplorerSectionIndexProvider *sectionIndexProvider;
- (id)lensChallengesSnapsCellViewModelDataProviderWithLensChallengesId:(id)arg1;
@property(readonly, nonatomic) id <SCLensExplorerBaseViewModelDataProvider> lensChallengesCellViewModelDataProvider;
@property(readonly, nonatomic) SCLensExplorerActionHandlerFactory *actionHandlerFactory;
- (id)dependencyProvider;
- (id)debugInfoProvider;
- (id)lensExplorerRouter;
- (id)queryCoordinatorFactory;
- (id)userSettings;
- (id)requestProviderFactory;
- (id)lensChallengesSnapsSectionWithLensChallengesSectionId:(id)arg1;
- (id)lensChallengesSection;
- (id)lensExplorerSectionFromIdentifier:(id)arg1;
- (id)lensSectionWithIdentifier:(id)arg1;
- (id)sectionCreator;
- (id)createQueryFactory;
- (id)lensChallengesStoriesResultsControllerWithCollectionView:(id)arg1 lensChallengesId:(id)arg2 queryCoordinatorDelegate:(id)arg3;
- (id)lensQueryResultsControllerWithCollectionView:(id)arg1 sectionIds:(id)arg2;
- (id)lensExplorerPerformanceLogger;
- (id)lensExplorerLensUnlocker;
- (id)eventsControllerManager;
- (id)initWithDependencyProvider:(id)arg1 lensExplorerRouter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

