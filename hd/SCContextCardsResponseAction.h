//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCContextCardsResponse;

@interface SCContextCardsResponseAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResponse; // @dynamic hasResponse;
@property(retain, nonatomic) NSMutableArray *queriesArray; // @dynamic queriesArray;
@property(readonly, nonatomic) unsigned long long queriesArray_Count; // @dynamic queriesArray_Count;
@property(retain, nonatomic) SCContextCardsResponse *response; // @dynamic response;

@end

