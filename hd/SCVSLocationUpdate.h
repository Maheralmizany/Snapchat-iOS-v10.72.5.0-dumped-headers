//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCVSMotionData;

@interface SCVSLocationUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float altitude; // @dynamic altitude;
@property(nonatomic) long long friendListVersion; // @dynamic friendListVersion;
@property(nonatomic) _Bool gpsReset; // @dynamic gpsReset;
@property(nonatomic) _Bool hasMotionData; // @dynamic hasMotionData;
@property(nonatomic) float horizontalAccuracy; // @dynamic horizontalAccuracy;
@property(nonatomic) _Bool isBackgrounded; // @dynamic isBackgrounded;
@property(nonatomic) float lat; // @dynamic lat;
@property(nonatomic) float lng; // @dynamic lng;
@property(retain, nonatomic) SCVSMotionData *motionData; // @dynamic motionData;
@property(nonatomic) long long preferenceVersion; // @dynamic preferenceVersion;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(nonatomic) float verticalAccuracy; // @dynamic verticalAccuracy;

@end

