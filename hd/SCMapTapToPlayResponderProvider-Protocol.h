//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMapTapToPlayLogger, SCXRenderLayer, UIView;

@protocol SCMapTapToPlayResponderProvider <NSObject>
- (id <SCMapTapToPlayResponder>)mapTapToPlayAnywhereResponderForMapView:(UIView *)arg1 mapViewport:(id <SCMapViewport>)arg2 presentationDelegate:(id <SCMapTouchResponderPresentationDelegate>)arg3 renderLayer:(SCXRenderLayer *)arg4 tapToPlayLogger:(SCMapTapToPlayLogger *)arg5;
- (id <SCMapTapToPlayResponder>)mapTapToPlayDiscoverPOIResponderForMapView:(UIView *)arg1 mapViewport:(id <SCMapViewport>)arg2 presentationDelegate:(id <SCMapTouchResponderPresentationDelegate>)arg3 renderLayer:(SCXRenderLayer *)arg4 tapToPlayLogger:(SCMapTapToPlayLogger *)arg5;
- (id <SCMapTapToPlayResponder>)mapTapToPlayPOIResponderForMapView:(UIView *)arg1 mapViewport:(id <SCMapViewport>)arg2 presentationDelegate:(id <SCMapTouchResponderPresentationDelegate>)arg3 renderLayer:(SCXRenderLayer *)arg4 tapToPlayLogger:(SCMapTapToPlayLogger *)arg5;
@end

