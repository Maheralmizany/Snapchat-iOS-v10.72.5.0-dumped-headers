//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MGLAnnotation.h"
#import "NSSecureCoding.h"

@class NSString;

@interface MGLShape : NSObject <MGLAnnotation, NSSecureCoding>
{
    NSString *_title;
    NSString *_subtitle;
}

+ (_Bool)supportsSecureCoding;
+ (id)shapeWithData:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)geoJSONDataUsingEncoding:(unsigned long long)arg1;
- (geometry_0b6042fd)geometryObject;
- (variant_d69826d0)geoJSONObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

