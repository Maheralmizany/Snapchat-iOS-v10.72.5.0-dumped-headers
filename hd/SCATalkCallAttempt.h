//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCATalkCallEventBase.h"

@interface SCATalkCallAttempt : SCATalkCallEventBase
{
}

- (void)setWithIncomingCallAbandon:(_Bool)arg1;
- (void)setWithCallStartFromPhoneRecentList:(_Bool)arg1;
- (void)setUserPresentCount:(long long)arg1;
- (void)setSelfieModeActivationCount:(long long)arg1;
- (void)setFilterLensCount:(long long)arg1;
- (void)setEndPhase:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)initWithCallUUID:(id)arg1 initialMediaType:(long long)arg2 endPhase:(long long)arg3 intParams:(id)arg4 floatParams:(id)arg5 correspondentId:(id)arg6;

@end
