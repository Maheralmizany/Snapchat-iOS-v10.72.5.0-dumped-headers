//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSOrderedSet, NSString, SCXAnimation, SCXMediaManager, SCXShadedRadiusViewState, SCXSlingshot, SCXTileManager, SCXWeather, UIView;

@interface SCXRenderContext : NSObject
{
    _Bool _drawThreeDimensionalPois;
    _Bool _tapTextureLocationIsSet;
    _Bool _ignoringSpriteCollisions;
    _Bool _contentTilesLoaded;
    _Bool _allStoryThumbnailsLoaded;
    _Bool _allSpritesLoaded;
    unsigned int _tapTextureLocation;
    float _poiLayerOpacity;
    float _heatmapLayerOpacity;
    float _spriteLayerOpacity;
    float _overlaySpriteLayerOpacity;
    float _blackOverlayLayerOpacity;
    float _unlockablePoiOpacity;
    id <SCMapConfiguration> _mapConfiguration;
    id <SCMapViewport> _mapViewport;
    UIView *_mapView;
    SCXTileManager *_tileManager;
    SCXMediaManager *_mediaManager;
    NSDictionary *_thumbnailViewStates;
    NSArray *_thumbnailRenderOrder;
    NSArray *_overridePoiTile;
    NSDictionary *_tapAnimationViewStates;
    NSOrderedSet *_pluginSprites;
    NSOrderedSet *_travelPaths;
    NSOrderedSet *_spriteClusters;
    NSOrderedSet *_overlaySprites;
    SCXShadedRadiusViewState *_shadedRadiusViewState;
    SCXAnimation *_poiLayerOpacityAnimation;
    SCXAnimation *_heatmapLayerOpacityAnimation;
    SCXAnimation *_spriteLayerOpacityAnimation;
    SCXAnimation *_overlaySpriteLayerOpacityAnimation;
    SCXAnimation *_blackOverlayLayerOpacityAnimation;
    double _zoom;
    double _direction;
    unsigned long long _viewportMaxGameMarkersCount;
    SCXWeather *_weather;
    NSString *_weatherLiveEditHostname;
    SCXSlingshot *_slingshot;
    unsigned long long _totalHeatPoints;
    struct CGSize _size;
    struct CLLocationCoordinate2D _center;
}

+ (float)effectiveOpacityWithBase:(float)arg1 animation:(id)arg2;
@property unsigned long long totalHeatPoints; // @synthesize totalHeatPoints=_totalHeatPoints;
@property(retain) SCXSlingshot *slingshot; // @synthesize slingshot=_slingshot;
@property(copy) NSString *weatherLiveEditHostname; // @synthesize weatherLiveEditHostname=_weatherLiveEditHostname;
@property(retain) SCXWeather *weather; // @synthesize weather=_weather;
@property unsigned long long viewportMaxGameMarkersCount; // @synthesize viewportMaxGameMarkersCount=_viewportMaxGameMarkersCount;
@property _Bool allSpritesLoaded; // @synthesize allSpritesLoaded=_allSpritesLoaded;
@property _Bool allStoryThumbnailsLoaded; // @synthesize allStoryThumbnailsLoaded=_allStoryThumbnailsLoaded;
@property _Bool contentTilesLoaded; // @synthesize contentTilesLoaded=_contentTilesLoaded;
@property double direction; // @synthesize direction=_direction;
@property double zoom; // @synthesize zoom=_zoom;
@property struct CLLocationCoordinate2D center; // @synthesize center=_center;
@property struct CGSize size; // @synthesize size=_size;
@property _Bool ignoringSpriteCollisions; // @synthesize ignoringSpriteCollisions=_ignoringSpriteCollisions;
@property float unlockablePoiOpacity; // @synthesize unlockablePoiOpacity=_unlockablePoiOpacity;
@property float blackOverlayLayerOpacity; // @synthesize blackOverlayLayerOpacity=_blackOverlayLayerOpacity;
@property(retain) SCXAnimation *blackOverlayLayerOpacityAnimation; // @synthesize blackOverlayLayerOpacityAnimation=_blackOverlayLayerOpacityAnimation;
@property float overlaySpriteLayerOpacity; // @synthesize overlaySpriteLayerOpacity=_overlaySpriteLayerOpacity;
@property(retain) SCXAnimation *overlaySpriteLayerOpacityAnimation; // @synthesize overlaySpriteLayerOpacityAnimation=_overlaySpriteLayerOpacityAnimation;
@property float spriteLayerOpacity; // @synthesize spriteLayerOpacity=_spriteLayerOpacity;
@property(retain) SCXAnimation *spriteLayerOpacityAnimation; // @synthesize spriteLayerOpacityAnimation=_spriteLayerOpacityAnimation;
@property float heatmapLayerOpacity; // @synthesize heatmapLayerOpacity=_heatmapLayerOpacity;
@property(retain) SCXAnimation *heatmapLayerOpacityAnimation; // @synthesize heatmapLayerOpacityAnimation=_heatmapLayerOpacityAnimation;
@property float poiLayerOpacity; // @synthesize poiLayerOpacity=_poiLayerOpacity;
@property(retain) SCXAnimation *poiLayerOpacityAnimation; // @synthesize poiLayerOpacityAnimation=_poiLayerOpacityAnimation;
@property(retain) SCXShadedRadiusViewState *shadedRadiusViewState; // @synthesize shadedRadiusViewState=_shadedRadiusViewState;
@property(retain) NSOrderedSet *overlaySprites; // @synthesize overlaySprites=_overlaySprites;
@property(retain) NSOrderedSet *spriteClusters; // @synthesize spriteClusters=_spriteClusters;
@property(retain) NSOrderedSet *travelPaths; // @synthesize travelPaths=_travelPaths;
@property(retain) NSOrderedSet *pluginSprites; // @synthesize pluginSprites=_pluginSprites;
@property unsigned int tapTextureLocation; // @synthesize tapTextureLocation=_tapTextureLocation;
@property _Bool tapTextureLocationIsSet; // @synthesize tapTextureLocationIsSet=_tapTextureLocationIsSet;
@property(retain) NSDictionary *tapAnimationViewStates; // @synthesize tapAnimationViewStates=_tapAnimationViewStates;
@property(retain, nonatomic) NSArray *overridePoiTile; // @synthesize overridePoiTile=_overridePoiTile;
@property _Bool drawThreeDimensionalPois; // @synthesize drawThreeDimensionalPois=_drawThreeDimensionalPois;
@property(retain) NSArray *thumbnailRenderOrder; // @synthesize thumbnailRenderOrder=_thumbnailRenderOrder;
@property(retain) NSDictionary *thumbnailViewStates; // @synthesize thumbnailViewStates=_thumbnailViewStates;
@property(retain) SCXMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
@property(retain) SCXTileManager *tileManager; // @synthesize tileManager=_tileManager;
@property(readonly) __weak UIView *mapView; // @synthesize mapView=_mapView;
@property(readonly) id <SCMapViewport> mapViewport; // @synthesize mapViewport=_mapViewport;
@property(readonly) id <SCMapConfiguration> mapConfiguration; // @synthesize mapConfiguration=_mapConfiguration;
- (void).cxx_destruct;
- (id)initWithMapConfiguration:(id)arg1 mapViewport:(id)arg2 mapView:(id)arg3;

@end

