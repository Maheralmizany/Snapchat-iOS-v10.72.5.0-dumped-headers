//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMTGameTileSetInfo, SCMTHeatTileSetInfo, SCMTMarkerTileSetInfo, SCMTPoiTileSetInfo, SCMTRenderConfig, SCMTTileSetId;

@interface SCMTTileSetInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMTGameTileSetInfo *gameTileSetInfo; // @dynamic gameTileSetInfo;
@property(nonatomic) _Bool hasGameTileSetInfo; // @dynamic hasGameTileSetInfo;
@property(nonatomic) _Bool hasHeatTileSetInfo; // @dynamic hasHeatTileSetInfo;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMarkerTileSetInfo; // @dynamic hasMarkerTileSetInfo;
@property(nonatomic) _Bool hasPoiTileSetInfo; // @dynamic hasPoiTileSetInfo;
@property(nonatomic) _Bool hasRenderConfig; // @dynamic hasRenderConfig;
@property(retain, nonatomic) SCMTHeatTileSetInfo *heatTileSetInfo; // @dynamic heatTileSetInfo;
@property(retain, nonatomic) SCMTTileSetId *id_p; // @dynamic id_p;
@property(nonatomic) double lastUpdateTime; // @dynamic lastUpdateTime;
@property(retain, nonatomic) SCMTMarkerTileSetInfo *markerTileSetInfo; // @dynamic markerTileSetInfo;
@property(retain, nonatomic) SCMTPoiTileSetInfo *poiTileSetInfo; // @dynamic poiTileSetInfo;
@property(retain, nonatomic) SCMTRenderConfig *renderConfig; // @dynamic renderConfig;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(nonatomic) int state; // @dynamic state;

@end

