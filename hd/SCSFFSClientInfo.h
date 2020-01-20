//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSCOREAppInfo, SCSCOREConnectionInfo, SCSCOREDeviceInfo, SCSCOREGeoLocation;

@interface SCSFFSClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCOREAppInfo *appInfo; // @dynamic appInfo;
@property(retain, nonatomic) SCSCOREConnectionInfo *connectionInfo; // @dynamic connectionInfo;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) SCSCOREDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(nonatomic) _Bool hasAppInfo; // @dynamic hasAppInfo;
@property(nonatomic) _Bool hasConnectionInfo; // @dynamic hasConnectionInfo;
@property(nonatomic) _Bool hasDeviceInfo; // @dynamic hasDeviceInfo;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) SCSCOREGeoLocation *location; // @dynamic location;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

