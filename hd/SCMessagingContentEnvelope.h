//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, SCMessagingEnvelopeEncryption;

@interface SCMessagingContentEnvelope : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int contentType; // @dynamic contentType;
@property(copy, nonatomic) NSData *contents; // @dynamic contents;
@property(retain, nonatomic) SCMessagingEnvelopeEncryption *encryption; // @dynamic encryption;
@property(nonatomic) _Bool hasEncryption; // @dynamic hasEncryption;
@property(retain, nonatomic) NSMutableArray *mediaInfoArray; // @dynamic mediaInfoArray;
@property(readonly, nonatomic) unsigned long long mediaInfoArray_Count; // @dynamic mediaInfoArray_Count;

@end

