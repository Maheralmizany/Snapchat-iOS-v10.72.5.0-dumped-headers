//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedStoriesPrefetching.h"
#import "SCEventListener.h"

@class NSArray, NSString, SCExperimentManager, SCQueuePerformer;

@interface SCDiscoverFeedPrefetchHandler : NSObject <SCEventListener, SCDiscoverFeedStoriesPrefetching>
{
    SCQueuePerformer *_performer;
    NSArray *_prefetchers;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)_handlePrefetchEvent:(unsigned long long)arg1;
- (void)_handleSuspendedUpdateWithEventName:(id)arg1 extraData:(id)arg2;
- (void)_handleCarouselSectionScrollWithEventName:(id)arg1 extraData:(id)arg2;
- (void)didExitDiscover;
- (void)_prefetchWithViewModels:(id)arg1;
- (void)prefetchWithViewModels:(id)arg1;
- (void)prefetchVisibleTilesInDiscoverFeedCollectionView:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithPrefetchers:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

