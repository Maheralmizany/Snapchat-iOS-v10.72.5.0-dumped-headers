//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCDiscoverFeedPublisherDeltaFetchExperimentContext : SCExperimentContext
{
    _Bool _enableDeltaFetchPublisherStory;
    long long _subPushdownCount;
}

@property(readonly, nonatomic) long long subPushdownCount; // @synthesize subPushdownCount=_subPushdownCount;
@property(readonly, nonatomic) _Bool enableDeltaFetchPublisherStory; // @synthesize enableDeltaFetchPublisherStory=_enableDeltaFetchPublisherStory;
- (void)setupParameters;
- (id)experimentName;

@end

