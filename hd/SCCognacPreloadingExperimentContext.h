//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCCognacPreloadingExperimentContext : SCExperimentContext
{
    _Bool _enableBackgroundPreloading;
    _Bool _enablePreloadOnFeedPage;
    long long _inactiveDaysThreshold;
    long long _backgroundPreloadCount;
    long long _backgroundPreloadIntervalInHour;
    long long _webProxyCacheSizeMB;
}

@property(readonly, nonatomic) _Bool enablePreloadOnFeedPage; // @synthesize enablePreloadOnFeedPage=_enablePreloadOnFeedPage;
@property(readonly, nonatomic) _Bool enableBackgroundPreloading; // @synthesize enableBackgroundPreloading=_enableBackgroundPreloading;
@property(readonly, nonatomic) long long webProxyCacheSizeMB; // @synthesize webProxyCacheSizeMB=_webProxyCacheSizeMB;
@property(readonly, nonatomic) long long backgroundPreloadIntervalInHour; // @synthesize backgroundPreloadIntervalInHour=_backgroundPreloadIntervalInHour;
@property(readonly, nonatomic) long long backgroundPreloadCount; // @synthesize backgroundPreloadCount=_backgroundPreloadCount;
@property(readonly, nonatomic) long long inactiveDaysThreshold; // @synthesize inactiveDaysThreshold=_inactiveDaysThreshold;
- (void)setupParameters;
- (id)experimentName;

@end

