//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAChatPageChatCreateView : SCAUserTrackedEvent
{
}

- (void)setViewTimeUntilChatStartSec:(double)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setSource:(long long)arg1;
- (void)setSectionsFriendsSelected:(id)arg1;
- (void)setSectionsAvailable:(id)arg1;
- (void)setIsGroupNamed:(_Bool)arg1;
- (void)setIsGroupChat:(_Bool)arg1;
- (void)setIsGroupButtonTapped:(_Bool)arg1;
- (void)setExitEvent:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

