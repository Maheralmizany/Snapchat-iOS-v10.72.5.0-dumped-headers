//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCACognacActionEventBase.h"

@interface SCACognacActionCloseSuccess : SCACognacActionEventBase
{
}

- (void)setStatus:(long long)arg1;
- (void)setMaxParticipantCount:(long long)arg1;
- (void)setLoadingProgress:(long long)arg1;
- (void)setCurrentParticipantCount:(long long)arg1;
- (void)setCognacTimeSec:(double)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

