//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSCOREAppInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int appBuild; // @dynamic appBuild;
@property(nonatomic) int appVariant; // @dynamic appVariant;
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(nonatomic) int osType; // @dynamic osType;
@property(copy, nonatomic) NSString *osVersion; // @dynamic osVersion;

@end

