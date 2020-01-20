//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLens;

@interface SCLensReadyEvent : NSObject
{
    NSString *_uniqueId;
    NSString *_lensSessionId;
    SCLens *_lens;
    double _startTime;
}

@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
- (void).cxx_destruct;
- (void)logFailureEventAtTime:(double)arg1;
- (void)logSuccessEventAtTime:(double)arg1;
- (void)_logGrapheneMetricWithResult:(_Bool)arg1 endTime:(double)arg2;
- (id)initWithLens:(id)arg1 lensSessionId:(id)arg2 startTime:(double)arg3;

@end
