//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGLShape.h"

@interface MGLPointAnnotation : MGLShape
{
    struct CLLocationCoordinate2D coordinate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
- (geometry_0b6042fd)geometryObject;
- (id)geoJSONDictionary;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
