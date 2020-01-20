//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSnapAdsCognacSkippableFlagExperimentContext : SCExperimentContext
{
    _Bool _enableCognacSkippableAd;
    double _cognacUnskippableDurationSecs;
    long long _adUnskippableProgressBarText;
}

@property(readonly, nonatomic) long long adUnskippableProgressBarText; // @synthesize adUnskippableProgressBarText=_adUnskippableProgressBarText;
@property(readonly, nonatomic) double cognacUnskippableDurationSecs; // @synthesize cognacUnskippableDurationSecs=_cognacUnskippableDurationSecs;
@property(readonly, nonatomic) _Bool enableCognacSkippableAd; // @synthesize enableCognacSkippableAd=_enableCognacSkippableAd;
- (void)setupParameters;
- (id)experimentName;

@end
