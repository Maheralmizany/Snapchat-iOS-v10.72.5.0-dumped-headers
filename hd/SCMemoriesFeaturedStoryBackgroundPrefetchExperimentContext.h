//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMemoriesFeaturedStoryBackgroundPrefetchExperimentContext : SCExperimentContext
{
    _Bool _prefetchParallelDownload;
    _Bool _prefetchVideosOnly;
    _Bool _silentPushEnabled;
    unsigned long long _prefetchSnapCount;
    unsigned long long _prefetchInterval;
}

@property(readonly, nonatomic) _Bool silentPushEnabled; // @synthesize silentPushEnabled=_silentPushEnabled;
@property(readonly, nonatomic) _Bool prefetchVideosOnly; // @synthesize prefetchVideosOnly=_prefetchVideosOnly;
@property(readonly, nonatomic) _Bool prefetchParallelDownload; // @synthesize prefetchParallelDownload=_prefetchParallelDownload;
@property(readonly, nonatomic) unsigned long long prefetchInterval; // @synthesize prefetchInterval=_prefetchInterval;
@property(readonly, nonatomic) unsigned long long prefetchSnapCount; // @synthesize prefetchSnapCount=_prefetchSnapCount;
- (void)setupParameters;
- (id)experimentName;

@end

