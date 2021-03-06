//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCMapSearchContext : NSObject
{
    id <SCMapSearchTileSetIdProviding> _tileSetIdProvider;
    double _zoomLevel;
    struct SCMapCoordinateBounds _visibleCoordinateBounds;
}

@property(readonly, nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) struct SCMapCoordinateBounds visibleCoordinateBounds; // @synthesize visibleCoordinateBounds=_visibleCoordinateBounds;
@property(readonly, nonatomic) __weak id <SCMapSearchTileSetIdProviding> tileSetIdProvider; // @synthesize tileSetIdProvider=_tileSetIdProvider;
- (void).cxx_destruct;
- (id)initWithTileSetIdProvider:(id)arg1 visibleCoordinateBounds:(struct SCMapCoordinateBounds)arg2 zoomLevel:(double)arg3;

@end

