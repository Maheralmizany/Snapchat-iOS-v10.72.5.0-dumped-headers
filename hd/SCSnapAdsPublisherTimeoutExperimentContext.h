//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSnapAdsPublisherTimeoutExperimentContext : SCExperimentContext
{
    long long _publisherTimeoutSeconds;
}

@property(readonly, nonatomic) long long publisherTimeoutSeconds; // @synthesize publisherTimeoutSeconds=_publisherTimeoutSeconds;
- (void)setupParameters;
- (id)experimentName;

@end
