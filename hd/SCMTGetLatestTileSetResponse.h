//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMTRenderConfig;

@interface SCMTGetLatestTileSetResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRenderConfig; // @dynamic hasRenderConfig;
@property(retain, nonatomic) SCMTRenderConfig *renderConfig; // @dynamic renderConfig;
@property(retain, nonatomic) NSMutableArray *tileSetInfosArray; // @dynamic tileSetInfosArray;
@property(readonly, nonatomic) unsigned long long tileSetInfosArray_Count; // @dynamic tileSetInfosArray_Count;

@end

