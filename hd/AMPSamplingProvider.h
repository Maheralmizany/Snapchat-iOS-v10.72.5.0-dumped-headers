//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface AMPSamplingProvider : NSObject
{
    NSNumber *_minPerUserSamplingRate;
}

@property(readonly, nonatomic) NSNumber *minPerUserSamplingRate; // @synthesize minPerUserSamplingRate=_minPerUserSamplingRate;
- (void).cxx_destruct;
- (double)_randomFloatValueBetweenZeroAndOne;
- (_Bool)_shouldLogFromPercent:(double)arg1;
- (_Bool)shouldLogEvent:(id)arg1;
- (id)initWithConfigSamplingRate:(id)arg1;

@end

