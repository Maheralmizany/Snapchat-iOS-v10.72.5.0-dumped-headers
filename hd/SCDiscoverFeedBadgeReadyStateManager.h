//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCQueuePerformer;

@interface SCDiscoverFeedBadgeReadyStateManager : NSObject
{
    _Bool _isDiscoverFeedStoriesReady;
    _Bool _isBadgeReady;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (_Bool)isBadgeDisplayReady;
- (void)setBadgeReady;
- (void)setDiscoverFeedStoriesReady;
- (void)resetReadyState;
- (id)init;

@end
