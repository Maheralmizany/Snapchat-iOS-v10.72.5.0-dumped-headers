//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, StoryDoc_ID;

@interface StoryDoc : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *envelopeArray; // @dynamic envelopeArray;
@property(readonly, nonatomic) unsigned long long envelopeArray_Count; // @dynamic envelopeArray_Count;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(retain, nonatomic) StoryDoc_ID *id_p; // @dynamic id_p;

@end

