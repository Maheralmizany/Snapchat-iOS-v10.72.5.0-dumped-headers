//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppApplicationLoginTwoFactorPageview : SCAUserTrackedEvent
{
}

- (void)setLongClientId:(id)arg1;
- (void)setLoginFlowSessionId:(id)arg1;
- (void)setHasLoggedInBefore:(_Bool)arg1;
- (void)setContext:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
