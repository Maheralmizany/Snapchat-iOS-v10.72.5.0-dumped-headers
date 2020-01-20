//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGroupsDataRequestListener.h"
#import "SCSectionDataProviding.h"
#import "SCSendToListsDataRequestListener.h"
#import "SCSnapchattersDataRequestListener.h"
#import "SCTraceEnabled.h"
#import "SCUserSelectionListener.h"

@class NSArray, NSDictionary, NSMutableArray, NSObject<NSCopying>, NSString, SCEventListenerAnnouncer, SCLazy, SCSearchQuery, SCSendToDocObjectRecipientDataSource, SCSendToLatencyMetricLogger, SCUserSession;

@interface SCSendToRecipientsSectionDataProvider : NSObject <SCUserSelectionListener, SCSnapchattersDataRequestListener, SCGroupsDataRequestListener, SCSendToListsDataRequestListener, SCTraceEnabled, SCSectionDataProviding>
{
    SCUserSession *_userSession;
    id <SCImageDownloading> _imageDownloader;
    SCSendToDocObjectRecipientDataSource *_recipientDataSource;
    SCLazy *_userInfoProvider;
    id <SCUserSelectionManaging> _selectionStateManager;
    CDUnknownBlockType _snapchatterViewModelGenerator;
    CDUnknownBlockType _groupViewModelGenerator;
    NSString *_sectionType;
    NSString *_cellReuseIdentifier;
    SCSearchQuery *_lastQuery;
    long long _dataLoadingStatus;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_recipients;
    NSDictionary *_recipientIdToIndexMap;
    NSMutableArray *_containerViewModels;
    NSString *_selfDisplayName;
    _Bool _includingMyself;
    SCSendToLatencyMetricLogger *_latencyLogger;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_logCellRendered;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (void)_updateSectionDataModelAsynchronously;
- (_Bool)_shouldUpdateSection;
- (_Bool)_isRecipientSelected:(id)arg1;
- (id)_containerCellViewModelForRecipient:(id)arg1 index:(unsigned long long)arg2 isSelected:(_Bool)arg3;
- (void)_updateContainerViewModelsWithSelectedItems:(id)arg1 deselectedItems:(id)arg2;
- (void)_setRecipients:(id)arg1;
- (void)didUpdateListsWithListDataModels:(id)arg1 deletedListDataModels:(id)arg2;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (id)configurationBlocksByReuseIdentifier;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (long long)dataLoadingStatus;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithRecipientDataSource:(id)arg1 userInfoProvider:(id)arg2 imageDownloader:(id)arg3 userSession:(id)arg4 selectionStateManager:(id)arg5 snapchatterViewModelGenerator:(CDUnknownBlockType)arg6 groupViewModelGenerator:(CDUnknownBlockType)arg7 sectionType:(id)arg8 includingMyself:(_Bool)arg9 latencyLogger:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
