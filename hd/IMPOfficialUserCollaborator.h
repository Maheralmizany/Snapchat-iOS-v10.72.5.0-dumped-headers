//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPUserDisplayInfo;

@interface IMPOfficialUserCollaborator : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) IMPUserDisplayInfo *displayInfo; // @dynamic displayInfo;
@property(nonatomic) _Bool hasDisplayInfo; // @dynamic hasDisplayInfo;
@property(nonatomic) int permissionBitmask; // @dynamic permissionBitmask;

@end
