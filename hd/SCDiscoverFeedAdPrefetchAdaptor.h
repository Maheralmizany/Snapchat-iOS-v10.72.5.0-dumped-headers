//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventListener.h"

@class NSNumber, NSString, SCQueuePerformer, SCUserSession;

@interface SCDiscoverFeedAdPrefetchAdaptor : NSObject <SCEventListener>
{
    SCUserSession *_userSession;
    NSNumber *_storyScore;
    long long _prefetchedTotalCount;
    double _lastPrefetchTimestamp;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)_triggerAdPrefetch;
- (void)_handleNetworkingUserProfile:(id)arg1;
- (void)_checkUserStoryScore;
- (void)_handleAvailableStoriesCount:(long long)arg1;
- (void)_checkAdPrefetchConditions;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)userSession;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

