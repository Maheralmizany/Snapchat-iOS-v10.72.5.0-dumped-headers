//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGLPolygon.h"

#import "MGLFeature.h"

@class NSDictionary, NSString;

@interface MGLPolygonFeature : MGLPolygon <MGLFeature>
{
    id identifier;
    NSDictionary *attributes;
}

@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes;
@property(copy, nonatomic) id identifier; // @synthesize identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (variant_d69826d0)geoJSONObject;
- (id)geoJSONDictionary;
- (id)attributeForKey:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

