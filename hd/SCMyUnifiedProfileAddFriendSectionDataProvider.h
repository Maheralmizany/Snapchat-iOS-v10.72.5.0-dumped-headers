//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSectionDataProviding.h"

@class NSObject<NSCopying>, NSOperationQueue, NSString, SCDisposableObserverLifecycle, SCEventListenerAnnouncer, SCLazy;

@interface SCMyUnifiedProfileAddFriendSectionDataProvider : NSObject <SCSectionDataProviding>
{
    SCLazy *_incomingFriendsRepository;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
    NSOperationQueue *_observerQueue;
    SCEventListenerAnnouncer *_eventAnnouncer;
    unsigned long long _pendingFriendRequests;
    unsigned long long _unviewedNewSuggestions;
    SCLazy *_userInfoProvider;
    SCLazy *_unviewedSuggestedSnapchatterRepository;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)_observeUnreadNewSuggestionsDidChange;
- (void)_observePendingAddedFriendsDidChange;
- (void)_reloadWithUnviewedNewSuggestions:(id)arg1;
- (void)_reloadWithPendingIncomingFriends:(id)arg1;
- (id)_addFriendContainerCellViewModel;
- (id)_subtitleViewModel;
- (id)_badgeViewModel;
- (unsigned long long)_badgeNumber;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithIncomingFriendsRepository:(id)arg1 unviewedSuggestedSnapchatterRepository:(id)arg2 userInfoProvider:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

