//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSectionDataProviding.h"
#import "SCSnapchattersDataRequestListener.h"

@class NSArray, NSObject<NSCopying>, NSString, SCEventListenerAnnouncer, SCLazy;

@interface SCSubscreenMyFriendsSectionDataProvider : NSObject <SCSnapchattersDataRequestListener, SCSectionDataProviding>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    id <SCSnapchatterRanking> _snapchatterRanker;
    CDUnknownBlockType _viewModelGenerator;
    CDUnknownBlockType _displayFilter;
    double _displayTimestamp;
    id <SCImageDownloading> _imageDownloader;
    long long _dataLoadingStatus;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_containerViewModels;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_setSnapchatters:(id)arg1;
- (void)_rankAndSetSnapchatters:(id)arg1;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (void)_updateSectionDataModel;
- (id)_containerCellViewModelForSnapchatter:(id)arg1 index:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (long long)dataLoadingStatus;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 imageDownloader:(id)arg3 displayTimestamp:(double)arg4 viewModelGenerator:(CDUnknownBlockType)arg5 displayFilter:(CDUnknownBlockType)arg6 snapchatterRanker:(id)arg7;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
