//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGLStyleLayer.h"

@class MGLStyle;

@interface MGLOpenGLStyleLayer : MGLStyleLayer
{
    MGLStyle *_style;
}

@property(nonatomic) __weak MGLStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (void)drawInMapView:(id)arg1 withContext:(struct MGLStyleLayerDrawingContext)arg2;
- (void)willMoveFromMapView:(id)arg1;
- (void)didMoveToMapView:(id)arg1;
- (void)removeFromStyle:(id)arg1;
- (void)addToStyle:(id)arg1 belowLayer:(id)arg2;
@property(readonly, nonatomic) struct CustomLayer *rawLayer;
- (id)initWithIdentifier:(id)arg1;

@end
