//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSectionDataProviding.h"
#import "SCUpdateListener.h"

@class NSObject<NSCopying>, NSString, SCEventListenerAnnouncer, SCGroupUnifiedProfileDataSource;

@interface SCGroupProfileCharmsSectionEmptyStateDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding>
{
    SCGroupUnifiedProfileDataSource *_dataSource;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSString *_groupDisplayName;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

