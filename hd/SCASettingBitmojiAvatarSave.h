//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCASettingBitmojiAvatarSave : SCAUserTrackedEvent
{
}

- (void)setWithEditedAvatar:(_Bool)arg1;
- (void)setSource:(long long)arg1;
- (void)setBitmojiAvatarBuilderType:(long long)arg1;
- (void)setAction:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

