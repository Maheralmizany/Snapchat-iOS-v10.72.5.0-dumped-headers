//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataCoordinatorListener.h"
#import "SCSectionDataProviding.h"
#import "SCUpdateListener.h"

@class NSObject<NSCopying>, NSString, SCEventListenerAnnouncer, SCGroupUnifiedProfileDataSource, SCLazy, SCUserSession;

@interface SCGroupUnifiedProfileMembersSectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding, SCDataCoordinatorListener>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCGroupUnifiedProfileDataSource *_dataSource;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoFetcher;
    SCUserSession *_userSession;
    SCLazy *_pinnedConversationsDataCoordinator;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)_containerCellViewModelForIndexPath:(id)arg1;
- (void)_configureGroupMembersCollectionViewCell:(id)arg1;
- (void)_configureMembersSectionCollectionViewCell:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDataSource:(id)arg1 imageDownloader:(id)arg2 labelInfoFetcher:(id)arg3 userSession:(id)arg4 pinnedConversationsDataCoordinator:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
