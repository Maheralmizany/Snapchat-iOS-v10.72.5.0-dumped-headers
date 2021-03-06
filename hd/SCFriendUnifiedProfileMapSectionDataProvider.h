//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapPersonLocationsListener.h"
#import "SCMapStatusFetcherListener.h"
#import "SCProfileLocationSharingControllerDataListener.h"
#import "SCProfileMapCardBitmojiLoaderDelegate.h"
#import "SCSectionDataProviding.h"
#import "SCUpdateListener.h"

@class NSObject<NSCopying>, NSString, SCEmbeddedMapViewLoggingSession, SCEventListenerAnnouncer, SCFriendUnifiedProfileDataSource, SCProfileLocationSharingController, SCProfileMapCardBitmojiLoader, SCProfileMapFriendCardDataProvider, SCUserSession;

@interface SCFriendUnifiedProfileMapSectionDataProvider : NSObject <SCProfileLocationSharingControllerDataListener, SCMapStatusFetcherListener, SCMapPersonLocationsListener, SCProfileMapCardBitmojiLoaderDelegate, SCUpdateListener, SCSectionDataProviding>
{
    SCUserSession *_userSession;
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCEmbeddedMapViewLoggingSession *_mapLoggingSession;
    SCProfileMapCardBitmojiLoader *_bitmojiLoader;
    SCProfileMapFriendCardDataProvider *_cardDataProvider;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
    SCProfileLocationSharingController *_locationSharingController;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) SCProfileLocationSharingController *locationSharingController; // @synthesize locationSharingController=_locationSharingController;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)profileMapCardBitmojiLoaderDidFinishFetching:(id)arg1;
- (void)profileLocationSharingControllerDidUpdate:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (void)_configureMapCardCell:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (void)_reloadCardDataProvider;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithUserSession:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

