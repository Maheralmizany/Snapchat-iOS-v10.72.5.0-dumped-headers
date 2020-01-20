//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class CLLocation, NSArray;

@interface SCGalleryLagunaMetadataLocationData : NSObject <NSCoding>
{
    CLLocation *_location;
    NSArray *_geoFilters;
    NSArray *_infoFilters;
}

@property(readonly, nonatomic) NSArray *infoFilters; // @synthesize infoFilters=_infoFilters;
@property(readonly, nonatomic) NSArray *geoFilters; // @synthesize geoFilters=_geoFilters;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 geoFilters:(id)arg2 infoFilters:(id)arg3;

@end
