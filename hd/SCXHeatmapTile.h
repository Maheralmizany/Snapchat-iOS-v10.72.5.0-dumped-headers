//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCXTile.h"

@class NSArray, NSString, SCMTTileId;

@interface SCXHeatmapTile : NSObject <SCXTile>
{
    int _numPoints;
    int _numFuzzPoints;
    SCMTTileId *_tileId;
    long long _epoch;
    struct SCXHeatmapPoint *_points;
    struct SCXHeatmapFuzzPoint *_fuzzPoints;
    NSArray *_quadrants;
    double _maxFuzzRadius;
    struct SCXMapBounds _bound;
}

@property struct SCXMapBounds bound; // @synthesize bound=_bound;
@property double maxFuzzRadius; // @synthesize maxFuzzRadius=_maxFuzzRadius;
@property(retain) NSArray *quadrants; // @synthesize quadrants=_quadrants;
@property struct SCXHeatmapFuzzPoint *fuzzPoints; // @synthesize fuzzPoints=_fuzzPoints;
@property int numFuzzPoints; // @synthesize numFuzzPoints=_numFuzzPoints;
@property struct SCXHeatmapPoint *points; // @synthesize points=_points;
@property int numPoints; // @synthesize numPoints=_numPoints;
@property long long epoch; // @synthesize epoch=_epoch;
@property(retain) SCMTTileId *tileId; // @synthesize tileId=_tileId;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

