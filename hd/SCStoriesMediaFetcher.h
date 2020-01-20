//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataCoordinatorListener.h"

@class NSMutableDictionary, NSString, SCQueuePerformer;

@interface SCStoriesMediaFetcher : NSObject <SCDataCoordinatorListener>
{
    id <SCStoriesMediaCoordinating> _storiesMediaCoordinator;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_mediaDownloadMap;
}

- (void).cxx_destruct;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_handleStateIdempotencyRequest:(id)arg1;
- (void)_handleStateChangeRequest:(id)arg1;
- (void)downloadStoriesMediaInfo:(id)arg1 creatorUsername:(id)arg2 userInitiated:(_Bool)arg3 completePrefetch:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithStoriesMediaCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

