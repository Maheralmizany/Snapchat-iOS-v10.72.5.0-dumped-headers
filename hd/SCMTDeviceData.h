//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTDeviceData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float batteryLevel; // @dynamic batteryLevel;
@property(nonatomic) _Bool devicePluggedIn; // @dynamic devicePluggedIn;
@property(nonatomic) _Bool headphoneOutput; // @dynamic headphoneOutput;
@property(nonatomic) _Bool isBackgrounded; // @dynamic isBackgrounded;
@property(nonatomic) _Bool isOtherAudioPlaying; // @dynamic isOtherAudioPlaying;
@property(copy, nonatomic) NSString *wifiSsid; // @dynamic wifiSsid;

@end

