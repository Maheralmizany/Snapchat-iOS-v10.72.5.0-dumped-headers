//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCBatchCaptureExperimentContext : SCExperimentContext
{
    _Bool _batchCapturePlaybackEnabled;
    _Bool _batchCaptureRecoveryEnabled;
    _Bool _batchCaptureUpdateStoryWhenSaving;
}

@property(readonly, nonatomic) _Bool batchCaptureUpdateStoryWhenSaving; // @synthesize batchCaptureUpdateStoryWhenSaving=_batchCaptureUpdateStoryWhenSaving;
@property(readonly, nonatomic) _Bool batchCaptureRecoveryEnabled; // @synthesize batchCaptureRecoveryEnabled=_batchCaptureRecoveryEnabled;
@property(readonly, nonatomic) _Bool batchCapturePlaybackEnabled; // @synthesize batchCapturePlaybackEnabled=_batchCapturePlaybackEnabled;
- (void)setupParameters;
- (id)experimentName;

@end
