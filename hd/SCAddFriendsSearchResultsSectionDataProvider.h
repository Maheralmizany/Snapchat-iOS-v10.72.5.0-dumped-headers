//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSectionDataProviding.h"
#import "SCSnapchattersDataRequestListener.h"

@class NSArray, NSObject<NSCopying>, NSString, SCEventListenerAnnouncer, SCLazy;

@interface SCAddFriendsSearchResultsSectionDataProvider : NSObject <SCSnapchattersDataRequestListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLazy *_snapchattersDataSearcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataFetcher;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoFetcher;
    NSString *_sectionType;
    CDUnknownBlockType _viewModelGenerator;
    long long _dataLoadingStatus;
    NSArray *_resultSnapchatters;
    NSString *_queryText;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void).cxx_destruct;
- (void)_refreshStateIfNecessary;
- (void)_removeSnapchatterWithUserId:(id)arg1;
- (void)_updateSnapchatterWithSnapchatter:(id)arg1;
- (void)_updateSnapchatterWithUserId:(id)arg1;
- (void)_updateResultSnapchatters:(id)arg1;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForIndexPath:(id)arg1;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (long long)dataLoadingStatus;
- (void)tearDown;
- (id)initWithSectionType:(id)arg1 viewModelGenerator:(CDUnknownBlockType)arg2 snapchattersDataFetcher:(id)arg3 snapchattersDataTracker:(id)arg4 snapchattersDataSearcher:(id)arg5 imageDownloader:(id)arg6 labelInfoFetcher:(id)arg7;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

