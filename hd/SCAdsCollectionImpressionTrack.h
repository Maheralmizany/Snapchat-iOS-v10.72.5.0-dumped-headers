//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCAdsCommonSnapAdImpressionTrack;

@interface SCAdsCollectionImpressionTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *collectionItemsTrackArray; // @dynamic collectionItemsTrackArray;
@property(readonly, nonatomic) unsigned long long collectionItemsTrackArray_Count; // @dynamic collectionItemsTrackArray_Count;
@property(nonatomic) _Bool hasTopsnapImpression; // @dynamic hasTopsnapImpression;
@property(retain, nonatomic) SCAdsCommonSnapAdImpressionTrack *topsnapImpression; // @dynamic topsnapImpression;

@end

