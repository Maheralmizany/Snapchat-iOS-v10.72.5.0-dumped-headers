//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStoriesFetching.h"

@class NSString, SCExperimentManager, SCLazy, SCMyCustomStoriesSyncer, SCSessionRequestManager, SCStoriesUnarchiver;

@interface SCStoriesSyncNetworkRequester : NSObject <SCStoriesFetching>
{
    SCSessionRequestManager *_requestManager;
    SCLazy *_myStoriesDataCoordinator;
    SCLazy *_snapViewerDataCoordinator;
    SCLazy *_storiesDataCoordinator;
    SCLazy *_docObjectContext;
    SCStoriesUnarchiver *_storiesUnarchiver;
    SCMyCustomStoriesSyncer *_myCustomStoriesSyncer;
    SCExperimentManager *_experimentManager;
    NSString *_currentUserId;
}

- (void).cxx_destruct;
- (void)_fetchViewerInfo;
- (void)_fetchMyStoriesWithCompletion:(CDUnknownBlockType)arg1 fetchSource:(id)arg2;
- (void)fetchStoriesForTriggerType:(long long)arg1;
- (void)syncStoriesWithFetchContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequestManager:(id)arg1 myStoriesDataCoordinator:(id)arg2 storiesDataCoordinator:(id)arg3 snapViewerDataCoordinator:(id)arg4 docObjectContext:(id)arg5 storiesUnarchiver:(id)arg6 myCustomStoriesSyncer:(id)arg7 experimentManager:(id)arg8 currentUserId:(id)arg9;

@end
