//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSectionDataProviding.h"
#import "SCUnifiedProfileBitmojiSectionLoadingStateProviderDelegate.h"
#import "SCUpdateListener.h"

@class NSArray, NSObject<NSCopying>, NSString, SCDisposableObserver, SCEventListenerAnnouncer, SCMyUnifiedProfileDataSource, SCPreferences, SCUnifiedProfileBitmojiSectionLoadingStateProvider;

@interface SCMyUnifiedProfileBitmojiSectionDataProvider : NSObject <SCUpdateListener, SCUnifiedProfileBitmojiSectionLoadingStateProviderDelegate, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCMyUnifiedProfileDataSource *_dataSource;
    id <SCBitmojiAvatarProvider> _bitmojiAvatarProvider;
    SCPreferences *_preferences;
    SCDisposableObserver *_avatarIdObserver;
    SCUnifiedProfileBitmojiSectionLoadingStateProvider *_bitmojiSectionLoadingStateProvider;
    NSArray *_sectionItems;
    _Bool _saleBadgeEnabled;
    _Bool _saleBadgeIsRed;
    _Bool _bitmojiMerchOnTop;
    _Bool _changeOutfitBadgeExperimentEnabled;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)loadingStateDidChange;
- (id)_createSectionItems;
- (id)_createBitmojiContentViewModel;
- (id)_contentViewModelForIndexPathItem:(long long)arg1;
- (id)_reuseIdentifierForIndexPathItem:(long long)arg1;
- (_Bool)_shouldShowChangeOutfitBadge;
- (void)_setShouldShowBitmojiManagementViewAndRefreshViewIfNeeded;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDataSource:(id)arg1 bitmojiAvatarProvider:(id)arg2 bitmojiSectionLoadingStateProvider:(id)arg3 preferences:(id)arg4 experimentManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
