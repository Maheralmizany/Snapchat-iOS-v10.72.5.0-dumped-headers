//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMemoriesV3ExperimentContext : SCExperimentContext
{
    _Bool _snapsTabEnabled;
    _Bool _prefetchEnabled;
}

@property(readonly, nonatomic) _Bool prefetchEnabled; // @synthesize prefetchEnabled=_prefetchEnabled;
@property(readonly, nonatomic) _Bool snapsTabEnabled; // @synthesize snapsTabEnabled=_snapsTabEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

