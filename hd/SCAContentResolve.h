//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAContentResolve : SCAUserTrackedEvent
{
}

- (void)setVariantSelected:(long long)arg1;
- (void)setVariantCOFRuleId:(id)arg1;
- (void)setTrigger:(long long)arg1;
- (void)setSecondaryUrlGenerated:(_Bool)arg1;
- (void)setRuleFileVariantSelected:(id)arg1;
- (void)setRuleFileOptimalVariant:(id)arg1;
- (void)setRuleFileAvailableVariants:(id)arg1;
- (void)setResolveType:(long long)arg1;
- (void)setResolveError:(long long)arg1;
- (void)setOptimalVariant:(long long)arg1;
- (void)setOptimalLocation:(long long)arg1;
- (void)setNetworkRulesCOFRuleId:(id)arg1;
- (void)setNetworkMappingVersion:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaContextType:(id)arg1;
- (void)setLocationsInferredAvailable:(id)arg1;
- (void)setLocationsGuaranteedAvailable:(id)arg1;
- (void)setLocationSelected:(long long)arg1;
- (void)setContentResolveTime:(long long)arg1;
- (void)setContentResolveId:(id)arg1;
- (void)setContentId:(id)arg1;
- (void)setCachedVariants:(id)arg1;
- (void)setBoltTenantUsecase:(long long)arg1;
- (void)setAvoidedFutureLocations:(_Bool)arg1;
- (void)setAvailableVariants:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
