//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCPUUID;

@interface SCCPCharmGraphic_Solomoji : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(copy, nonatomic) NSString *templateId; // @dynamic templateId;
@property(retain, nonatomic) SCCPUUID *userId; // @dynamic userId;

@end

