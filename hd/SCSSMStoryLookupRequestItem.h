//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCORECompositeStoryId, SCSSMStoryLookupRequestItem_DeltaFetchInfo;

@interface SCSSMStoryLookupRequestItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCORECompositeStoryId *compositeStoryId; // @dynamic compositeStoryId;
@property(retain, nonatomic) SCSSMStoryLookupRequestItem_DeltaFetchInfo *deltaFetchInfo; // @dynamic deltaFetchInfo;
@property(nonatomic) _Bool hasCompositeStoryId; // @dynamic hasCompositeStoryId;
@property(nonatomic) _Bool hasDeltaFetchInfo; // @dynamic hasDeltaFetchInfo;

@end

