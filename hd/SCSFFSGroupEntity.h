//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSCOREUUID, SCSFFSGroupMetadata;

@interface SCSFFSGroupEntity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCOREUUID *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) SCSFFSGroupMetadata *metadata; // @dynamic metadata;

@end

