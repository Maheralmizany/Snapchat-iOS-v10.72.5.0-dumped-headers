//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface MLBUbloxMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int classId; // @dynamic classId;
@property(nonatomic) _Bool hasClassId; // @dynamic hasClassId;
@property(nonatomic) _Bool hasMsgId; // @dynamic hasMsgId;
@property(nonatomic) _Bool hasPayload; // @dynamic hasPayload;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;

@end

