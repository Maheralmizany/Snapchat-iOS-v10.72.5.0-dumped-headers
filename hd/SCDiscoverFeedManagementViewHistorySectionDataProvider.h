//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataCoordinatorListener.h"
#import "SCSectionDataProviding.h"

@class NSArray, NSObject<NSCopying>, NSString, SCDiscoverFeedManagementFullScreenViewDataCoordinator, SCEventListenerAnnouncer, SCUserSession;

@interface SCDiscoverFeedManagementViewHistorySectionDataProvider : NSObject <SCDataCoordinatorListener, SCSectionDataProviding>
{
    NSArray *_containerCellViewModels;
    SCDiscoverFeedManagementFullScreenViewDataCoordinator *_discoverFeedManagementFullScreenDataCoordinator;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCImageDownloading> _imageDownloader;
    SCUserSession *_userSession;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void).cxx_destruct;
- (void)_updateContainerCellViewModelsImp:(id)arg1;
- (void)_updateContainerCellViewModels:(id)arg1;
- (void)_lookupDiscoverStory:(id)arg1;
- (void)_updateDataFromSnapViewCache;
- (void)_configureStoryCardCollectionViewCell:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (void)tearDown;
- (void)setUp;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithImageDownloader:(id)arg1 userSession:(id)arg2 discoverFeedManagementFullScreenDataCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

