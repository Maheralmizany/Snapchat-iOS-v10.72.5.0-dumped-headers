//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAFideliusSnapPhi : SCAUserTrackedEvent
{
}

- (void)setWrappedDeviceCount:(long long)arg1;
- (void)setWithRewrap:(_Bool)arg1;
- (void)setWithDataReady:(_Bool)arg1;
- (void)setTotalKeyCount:(long long)arg1;
- (void)setSecretGeneratedCount:(long long)arg1;
- (void)setRecipientCount:(long long)arg1;
- (void)setOperationTimeMs:(long long)arg1;
- (void)setOperationResult:(id)arg1;
- (void)setFideliusManagerStatus:(id)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setAverageOperationTimeMs:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
