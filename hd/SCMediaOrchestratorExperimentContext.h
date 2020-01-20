//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMediaOrchestratorExperimentContext : SCExperimentContext
{
    _Bool _enableMediaOrchestrator;
    _Bool _enableResumableUpload;
    long long _minimumSizeInMbForResumable;
}

@property(readonly, nonatomic) long long minimumSizeInMbForResumable; // @synthesize minimumSizeInMbForResumable=_minimumSizeInMbForResumable;
@property(readonly, nonatomic) _Bool enableResumableUpload; // @synthesize enableResumableUpload=_enableResumableUpload;
@property(readonly, nonatomic) _Bool enableMediaOrchestrator; // @synthesize enableMediaOrchestrator=_enableMediaOrchestrator;
- (void)setupParameters;
- (id)experimentName;

@end

