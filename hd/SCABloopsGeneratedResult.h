//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCABloopsGeneratedResult : SCAMapSerializable
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setBloopsSearchConfigurationName:(id)arg1;
- (void)setBloopsSDKVersion:(id)arg1;
- (void)setBloopsIsFromCache:(_Bool)arg1;
- (void)setBloopsId:(id)arg1;
- (void)setBloopsHasCustomText:(_Bool)arg1;
- (void)setBloopsGridIndex:(long long)arg1;
- (void)setBloopsGenerationInternalMetrics:(id)arg1;
- (void)setBloopsCoreApiVersion:(id)arg1;
- (void)setBloopsConfigUrl:(id)arg1;
- (void)setBloopsConfigGenderType:(long long)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

