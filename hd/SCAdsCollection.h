//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCAdsCollectionItemAttachment;

@interface SCAdsCollection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsCollectionItemAttachment *defaultAttachment; // @dynamic defaultAttachment;
@property(nonatomic) _Bool hasDefaultAttachment; // @dynamic hasDefaultAttachment;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;

@end

