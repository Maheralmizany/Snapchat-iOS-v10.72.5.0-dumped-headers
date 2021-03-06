//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCNContentManagerCacheMetrics, SCNContentManagerNetworkMetrics, SCNContentResolutionContentResolveExtractedParams;

@interface SCNContentManagerContentRetrievalMetrics : NSObject
{
    SCNContentManagerNetworkMetrics *_networkMetrics;
    SCNContentManagerCacheMetrics *_cacheMetrics;
    SCNContentResolutionContentResolveExtractedParams *_contentResolveExtractedParams;
}

+ (id)ContentRetrievalMetricsWithNetworkMetrics:(id)arg1 cacheMetrics:(id)arg2 contentResolveExtractedParams:(id)arg3;
@property(readonly, nonatomic) SCNContentResolutionContentResolveExtractedParams *contentResolveExtractedParams; // @synthesize contentResolveExtractedParams=_contentResolveExtractedParams;
@property(readonly, nonatomic) SCNContentManagerCacheMetrics *cacheMetrics; // @synthesize cacheMetrics=_cacheMetrics;
@property(readonly, nonatomic) SCNContentManagerNetworkMetrics *networkMetrics; // @synthesize networkMetrics=_networkMetrics;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNetworkMetrics:(id)arg1 cacheMetrics:(id)arg2 contentResolveExtractedParams:(id)arg3;

@end

