//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCBloopsFriendsInOnboardingExperimentContext : SCExperimentContext
{
    unsigned long long _maxRequested;
    unsigned long long _batchSize;
}

+ (id)experimentContextWithExperimentManager:(id)arg1;
@property(readonly, nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, nonatomic) unsigned long long maxRequested; // @synthesize maxRequested=_maxRequested;
- (void)setupParameters;
- (id)experimentName;

@end
