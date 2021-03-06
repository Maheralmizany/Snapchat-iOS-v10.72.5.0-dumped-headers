//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedStoryIHDataCoordinating.h"

@class NSArray, NSString, SCEncryptedCache, SCExperimentManager, SCQueuePerformer;

@interface SCDiscoverFeedStoryIHDataCoordinator : NSObject <SCDiscoverFeedStoryIHDataCoordinating>
{
    SCExperimentManager *_experimentManager;
    NSArray *_storiesInteractionHistory;
    SCEncryptedCache *_cache;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)_getInteractionHistoryWithStoryIHMetadata:(id)arg1;
- (void)_updateInteractionHistory:(id)arg1;
- (void)_updateStoriesInteractionHistory:(id)arg1;
- (void)_handleCachedStoriesInteractionHistory:(id)arg1;
- (void)_purgeCachedStoriesInteractionHistoryIfNeeded;
- (id)_getStoriesInteractionHistory;
- (void)loadStoriesInteractionHistoryFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveStoriesInteractionHistoryToDisk;
- (id)getStoriesInteractionHistory;
- (void)updateInteractionHistory:(id)arg1;
- (id)getInteractionHistoryWithStoryIHMetadata:(id)arg1;
- (id)initWithExperimentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

