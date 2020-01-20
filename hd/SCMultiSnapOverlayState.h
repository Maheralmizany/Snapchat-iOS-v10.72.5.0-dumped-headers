//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMultiSnapOverlayState.h"

@class NSArray, NSString, SOJUGalleryStreakFilter, SOJUGalleryVenueFilter;

@interface SCMultiSnapOverlayState : NSObject <SCMultiSnapOverlayState>
{
    NSArray *_captions;
    NSArray *_stickers;
    NSArray *_infoFilterMetadata;
    NSArray *_drawingStrokes;
    NSArray *_drawingStrokeIds;
    NSString *_drawingV2Data;
    NSArray *_geoFilters;
    SOJUGalleryVenueFilter *_venueFilter;
    SOJUGalleryStreakFilter *_streakFilter;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) SOJUGalleryStreakFilter *streakFilter; // @synthesize streakFilter=_streakFilter;
@property(readonly, copy, nonatomic) SOJUGalleryVenueFilter *venueFilter; // @synthesize venueFilter=_venueFilter;
@property(readonly, copy, nonatomic) NSArray *geoFilters; // @synthesize geoFilters=_geoFilters;
@property(readonly, copy, nonatomic) NSString *drawingV2Data; // @synthesize drawingV2Data=_drawingV2Data;
@property(readonly, copy, nonatomic) NSArray *drawingStrokeIds; // @synthesize drawingStrokeIds=_drawingStrokeIds;
@property(readonly, copy, nonatomic) NSArray *drawingStrokes; // @synthesize drawingStrokes=_drawingStrokes;
@property(readonly, copy, nonatomic) NSArray *infoFilterMetadata; // @synthesize infoFilterMetadata=_infoFilterMetadata;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, copy, nonatomic) NSArray *captions; // @synthesize captions=_captions;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCaptions:(id)arg1 stickers:(id)arg2 infoFilterMetadata:(id)arg3 drawingStrokes:(id)arg4 drawingStrokeIds:(id)arg5 drawingV2Data:(id)arg6 geoFilters:(id)arg7 venueFilter:(id)arg8 streakFilter:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
