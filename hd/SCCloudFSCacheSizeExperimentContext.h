//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCCloudFSCacheSizeExperimentContext : SCExperimentContext
{
    unsigned long long _cloudfsCacheSizeTreatmentType;
}

@property(readonly, nonatomic) unsigned long long cloudfsCacheSizeTreatmentType; // @synthesize cloudfsCacheSizeTreatmentType=_cloudfsCacheSizeTreatmentType;
- (void)setupParameters;
- (id)experimentName;

@end

