//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSagaPbFlashbackIdentifier, SCSagaPbFlashbackType;

@interface SCSagaPbFlashback : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long displayOrder; // @dynamic displayOrder;
@property(nonatomic) unsigned long long endEpochSecExclusive; // @dynamic endEpochSecExclusive;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) SCSagaPbFlashbackIdentifier *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @dynamic messagesArray;
@property(readonly, nonatomic) unsigned long long messagesArray_Count; // @dynamic messagesArray_Count;
@property(nonatomic) unsigned long long startEpochSecInclusive; // @dynamic startEpochSecInclusive;
@property(retain, nonatomic) SCSagaPbFlashbackType *type; // @dynamic type;
@property(nonatomic) _Bool viewed; // @dynamic viewed;

@end

