//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MGLMapView, MGLStyle, NSError;

@protocol SCMGLMapViewListener <NSObject>

@optional
- (void)mapView:(MGLMapView *)arg1 didChangeUserTrackingMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(MGLMapView *)arg1 didFinishLoadingStyle:(MGLStyle *)arg2;
- (void)mapViewDidFinishRenderingFrame:(MGLMapView *)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewDidFailLoadingMap:(MGLMapView *)arg1 withError:(NSError *)arg2;
- (void)mapViewDidFinishLoadingMap:(MGLMapView *)arg1;
- (void)mapViewWillStartLoadingMap:(MGLMapView *)arg1;
- (void)mapView:(MGLMapView *)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewRegionIsChanging:(MGLMapView *)arg1;
- (void)mapView:(MGLMapView *)arg1 regionWillChangeAnimated:(_Bool)arg2;
@end

