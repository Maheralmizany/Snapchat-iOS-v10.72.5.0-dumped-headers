//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMapCarouselPage.h"

@class SCEmbeddedMapView, SCGroupMapRequestLocationView, SCGroupMapViewPlaceModel, SCMapPerson;

@protocol SCGroupMapViewCarouselItem <SCMapCarouselPage>
- (void)didUnfocus;
- (void)didFocusAnimated:(_Bool)arg1 withMap:(SCEmbeddedMapView *)arg2 requestLocationOverlayView:(SCGroupMapRequestLocationView *)arg3;

@optional
- (SCGroupMapViewPlaceModel *)representedPlaceModel;
- (_Bool)isGroupCard;
- (SCMapPerson *)representedPerson;
@end

