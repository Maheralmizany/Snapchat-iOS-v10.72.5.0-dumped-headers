//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCAStateTransition : SCAMapSerializable
{
}

- (void)setTrigger:(id)arg1;
- (void)setTransitionTimeMs:(long long)arg1;
- (void)setToState:(id)arg1;
- (void)setFromState:(id)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

