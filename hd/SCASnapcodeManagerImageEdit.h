//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCASnapcodeManagerImageEdit : SCAUserTrackedEvent
{
}

- (void)setWebImageCount:(long long)arg1;
- (void)setSnapcodeWithImageCount:(long long)arg1;
- (void)setSnapcodeSessionId:(id)arg1;
- (void)setSnapcodeCount:(long long)arg1;
- (void)setSelectedImageSize:(long long)arg1;
- (void)setIsWebImage:(_Bool)arg1;
- (void)setIsImageMove:(_Bool)arg1;
- (void)setExit_event:(long long)arg1;
- (void)setCameraImageCount:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

