//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataCoordinating.h"

@class NSDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCQueuePerformer;

@interface SCStoriesSummariesObserver : NSObject <SCDataCoordinating>
{
    SCQueuePerformer *_performer;
    SCDocObjectContext *_docObjectContext;
    id <SCDocObjectObservationToken> _summaryObservationToken;
    NSDictionary *_summaries;
    SCDataCoordinatorListenerAnnouncer *_updateAnnouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceStoriesSummariesUpdate;
- (void)handleDataRequest:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)_updateSummaryFetchedResult:(id)arg1;
- (id)_fetchAndObserveForSummaryIds:(id)arg1;
- (void)storiesSummaryFilteredByIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPerformer:(id)arg1 docObjectContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

