//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCOperaShowsPlayerPreferredForwardBufferDurationExpContext : SCExperimentContext
{
    _Bool _enableShowsPlayerPreferredForwardBufferDuration;
    long long _startupPreferredForwardBufferDuration;
    long long _postStartupPreferredForwardBufferDuration;
}

@property(nonatomic) long long postStartupPreferredForwardBufferDuration; // @synthesize postStartupPreferredForwardBufferDuration=_postStartupPreferredForwardBufferDuration;
@property(nonatomic) long long startupPreferredForwardBufferDuration; // @synthesize startupPreferredForwardBufferDuration=_startupPreferredForwardBufferDuration;
@property(nonatomic) _Bool enableShowsPlayerPreferredForwardBufferDuration; // @synthesize enableShowsPlayerPreferredForwardBufferDuration=_enableShowsPlayerPreferredForwardBufferDuration;
- (void)setupParameters;
- (id)experimentName;

@end
