//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation;

@interface SCGalleryTakenNearbyGallerySnapItem : NSObject
{
    id <SCGallerySnap> _gallerySnap;
    CLLocation *_location;
    double _distance;
}

@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) id <SCGallerySnap> gallerySnap; // @synthesize gallerySnap=_gallerySnap;
- (void).cxx_destruct;

@end
