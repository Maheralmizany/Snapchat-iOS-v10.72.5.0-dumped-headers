//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCache, SCQueuePerformer;

@interface SCAdMediaMetadataCoordinator : NSObject
{
    SCCache *_cache;
    SCQueuePerformer *_cachePerformer;
}

- (void).cxx_destruct;
- (void)clearCacheWithMediaId:(id)arg1;
- (void)cacheAdMediaMetadataWithMediaId:(id)arg1 data:(id)arg2 expirationDurationInDays:(long long)arg3;
- (void)adMediaMetadataWithMediaId:(id)arg1 completition:(CDUnknownBlockType)arg2;
- (id)initWithCache:(id)arg1;

@end

