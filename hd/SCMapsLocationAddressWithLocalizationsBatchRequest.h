//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMapsRequestOptions;

@interface SCMapsLocationAddressWithLocalizationsBatchRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool includeIds; // @dynamic includeIds;
@property(retain, nonatomic) NSMutableArray *localesArray; // @dynamic localesArray;
@property(readonly, nonatomic) unsigned long long localesArray_Count; // @dynamic localesArray_Count;
@property(retain, nonatomic) NSMutableArray *locationsArray; // @dynamic locationsArray;
@property(readonly, nonatomic) unsigned long long locationsArray_Count; // @dynamic locationsArray_Count;
@property(retain, nonatomic) SCMapsRequestOptions *options; // @dynamic options;

@end

