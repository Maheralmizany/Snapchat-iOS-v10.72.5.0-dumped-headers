//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCHomeFilterInitialLaunchExperiment : SCExperimentContext
{
    _Bool _enableHomeFilter;
}

@property(readonly, nonatomic) _Bool enableHomeFilter; // @synthesize enableHomeFilter=_enableHomeFilter;
- (void)setupParameters;
- (id)experimentName;

@end

