//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensExplorerBaseViewModelDataProvider.h"
#import "SCUpdateListener.h"

@class NSArray, NSString, SCLensExplorerDataStore, SCUpdateListenerAnnouncer;

@interface SCLensExplorerBaseViewModelDataProvider : NSObject <SCUpdateListener, SCLensExplorerBaseViewModelDataProvider>
{
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    NSArray *_containerViewModels;
    SCLensExplorerDataStore *_dataStore;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)viewModelWithDataTransferObject:(id)arg1;
- (void)_loadSectionItems;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)refreshCachedItems;
- (void)clearMemoryCache;
- (_Bool)hasMoreItems;
- (void)updateFirstVisibleItems;
@property(readonly, copy, nonatomic) NSArray *viewModels;
- (id)initWithDataStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

