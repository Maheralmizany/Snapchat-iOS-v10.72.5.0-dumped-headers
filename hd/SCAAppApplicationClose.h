//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppApplicationClose : SCAUserTrackedEvent
{
}

- (void)setRealAppOpenTs:(id)arg1;
- (void)setRealAppCloseTs:(id)arg1;
- (void)setIsLoggingOut:(_Bool)arg1;
- (void)setDeepLinkSource:(long long)arg1;
- (void)setDeepLinkId:(id)arg1;
- (void)setApplicationState:(long long)arg1;
- (void)setAppOpenTs:(id)arg1;
- (void)setAdditionalInfo:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

