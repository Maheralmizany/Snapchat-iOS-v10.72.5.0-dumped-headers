//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, SCAdsApplication, SCAdsDevice, SCAdsNetwork, SCAdsPreferences;

@interface SCAdsCommonRequestData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsApplication *application; // @dynamic application;
@property(retain, nonatomic) SCAdsDevice *device; // @dynamic device;
@property(nonatomic) _Bool hasApplication; // @dynamic hasApplication;
@property(nonatomic) _Bool hasDevice; // @dynamic hasDevice;
@property(nonatomic) _Bool hasIsDebug; // @dynamic hasIsDebug;
@property(nonatomic) _Bool hasNetwork; // @dynamic hasNetwork;
@property(nonatomic) _Bool hasPreferences; // @dynamic hasPreferences;
@property(retain, nonatomic) GPBBoolValue *isDebug; // @dynamic isDebug;
@property(retain, nonatomic) SCAdsNetwork *network; // @dynamic network;
@property(retain, nonatomic) SCAdsPreferences *preferences; // @dynamic preferences;

@end
