//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCustomStoriesDataSyncing.h"

@class NSString, SCCustomStoriesNetworkRequester, SCLazy, SCQueuePerformer, SCStoriesIndividualRequestDebouncer;

@interface SCCustomStoriesDataSyncer : NSObject <SCCustomStoriesDataSyncing>
{
    SCCustomStoriesNetworkRequester *_networkRequester;
    SCLazy *_docObjectContext;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    NSString *_currentUserId;
    SCQueuePerformer *_performer;
    SCStoriesIndividualRequestDebouncer *_debouncer;
}

- (void).cxx_destruct;
- (void)_handleFetchedCustomStoriesWithPublicationIds:(id)arg1 fetchResponse:(id)arg2 requestSource:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchPublicationIdsOnPerfomer:(id)arg1 requestSource:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchPublicationIds:(id)arg1 requestSource:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchCustomStoriesMetadataIfPossibleOnPerformerWithPullMetadataRefresh:(_Bool)arg1 requestSource:(id)arg2;
- (void)fetchCustomStoriesMetadataIfPossibleWithFullMetadataRefresh:(_Bool)arg1 requestSource:(id)arg2;
- (id)initWithNetworkRequester:(id)arg1 docObjectContext:(id)arg2 grapheneMetricsEmitter:(id)arg3 currentUserId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

