//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBWifiAPInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPassword; // @dynamic hasPassword;
@property(nonatomic) _Bool hasSsid; // @dynamic hasSsid;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(copy, nonatomic) NSString *password; // @dynamic password;
@property(copy, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) int state; // @dynamic state;

@end

