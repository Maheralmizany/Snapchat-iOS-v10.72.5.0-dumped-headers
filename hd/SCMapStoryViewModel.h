//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCMTThumbnail;

@interface SCMapStoryViewModel : NSObject
{
    NSString *_poiID;
    SCMTThumbnail *_thumbnail;
    NSString *_storyTitle;
    NSString *_locality;
    struct CLLocationCoordinate2D _coordinate;
    double _destinationZoom;
    _Bool _isPlayable;
    NSString *_title;
    NSString *_subtitle;
}

+ (id)_localityNameFromPoi:(id)arg1;
+ (struct CLLocationCoordinate2D)_coordinateFromMetadata:(id)arg1;
+ (id)modelWithPointOfInterest:(id)arg1;
+ (id)modelWithPoiShareMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)webURL;
- (id)_prioritizedTitles;
- (id)mapDeepLinkWithSource:(long long)arg1;
- (id)searchThumbnail;
- (id)thumbnail;
- (id)locality;
- (id)subtitle;
- (id)title;
- (_Bool)isPlayable;
- (id)initWithPoiID:(id)arg1 storyTitle:(id)arg2 locality:(id)arg3 thumbnail:(id)arg4 coordinate:(struct CLLocationCoordinate2D)arg5 destinationZoom:(double)arg6 isPlayable:(_Bool)arg7;

@end

