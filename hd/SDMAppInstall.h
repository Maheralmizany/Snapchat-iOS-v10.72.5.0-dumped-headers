//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SDMAppInstall_AppInfo;

@interface SDMAppInstall : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SDMAppInstall_AppInfo *androidInfo; // @dynamic androidInfo;
@property(copy, nonatomic) NSString *appTitle; // @dynamic appTitle;
@property(nonatomic) _Bool hasAndroidInfo; // @dynamic hasAndroidInfo;
@property(nonatomic) _Bool hasIosInfo; // @dynamic hasIosInfo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SDMAppInstall_AppInfo *iosInfo; // @dynamic iosInfo;

@end

