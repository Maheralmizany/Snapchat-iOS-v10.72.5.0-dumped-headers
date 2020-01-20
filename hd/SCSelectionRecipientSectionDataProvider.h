//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSectionDataProviding.h"

@class NSArray, NSDictionary, NSObject<NSCopying>, NSOperationQueue, NSString, SCDisposableObserverLifecycle, SCEventListenerAnnouncer, SCLazy, SCSelectionTracker;

@interface SCSelectionRecipientSectionDataProvider : NSObject <SCSectionDataProviding>
{
    SCLazy *_selectionRecipientSectionDataSource;
    SCSelectionTracker *_selectionTracker;
    id <SCImageDownloading> _imageDownloader;
    CDUnknownBlockType _viewModelGenerator;
    NSString *_cellReuseIdentifier;
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _dataLoadingStatus;
    SCDisposableObserverLifecycle *_subscription;
    NSOperationQueue *_observationQueue;
    NSArray *_containerViewModels;
    NSDictionary *_selectionIdentifierToIndexMap;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForSelectionRecipient:(id)arg1 index:(unsigned long long)arg2 isSelected:(_Bool)arg3 count:(unsigned long long)arg4;
- (void)_setItemToSelectionStateMap:(struct NSDictionary *)arg1;
- (void)_setSelectionRecipients:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)dataLoadingStatus;
- (void)tearDown;
- (void)setUp;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithhSelectionGroupSectionDataSource:(id)arg1 selectionTracker:(id)arg2 imageDownloader:(id)arg3 viewModelGenerator:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

