//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSNTFNotificationEntityId;

@interface SCSNTFOptInEntity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(retain, nonatomic) SCSNTFNotificationEntityId *id_p; // @dynamic id_p;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) int type; // @dynamic type;

@end

