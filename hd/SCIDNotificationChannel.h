//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCIDNotificationChannel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool bypassDnd; // @dynamic bypassDnd;
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(nonatomic) int importance; // @dynamic importance;
@property(nonatomic) int lockscreenVisibility; // @dynamic lockscreenVisibility;
@property(nonatomic) _Bool showBadge; // @dynamic showBadge;
@property(nonatomic) _Bool showLights; // @dynamic showLights;
@property(copy, nonatomic) NSString *soundUri; // @dynamic soundUri;
@property(nonatomic) _Bool vibrationEnabled; // @dynamic vibrationEnabled;

@end

