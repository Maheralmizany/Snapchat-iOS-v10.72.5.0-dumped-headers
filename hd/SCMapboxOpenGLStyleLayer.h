//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGLOpenGLStyleLayer.h"

@interface SCMapboxOpenGLStyleLayer : MGLOpenGLStyleLayer
{
    id <SCMapCustomGLLayer> _customGLLayer;
}

- (void).cxx_destruct;
- (void)willMoveFromMapView:(id)arg1;
- (void)drawInMapView:(id)arg1 withContext:(struct MGLStyleLayerDrawingContext)arg2;
- (void)didMoveToMapView:(id)arg1;
- (id)initWithIdentifier:(id)arg1 customGLLayer:(id)arg2;

@end
