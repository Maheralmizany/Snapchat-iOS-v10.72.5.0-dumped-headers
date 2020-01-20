//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MGLMapView, NSString;

@interface MGLSource : NSObject
{
    unique_ptr_b6920a88 _pendingSource;
    NSString *_identifier;
    struct Source *_rawSource;
    MGLMapView *_mapView;
}

@property(readonly, nonatomic) __weak MGLMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) struct Source *rawSource; // @synthesize rawSource=_rawSource;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)removeFromMapView:(id)arg1;
- (void)addToMapView:(id)arg1;
- (id)initWithPendingSource:(unique_ptr_b6920a88)arg1;
- (id)initWithRawSource:(struct Source *)arg1 mapView:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

