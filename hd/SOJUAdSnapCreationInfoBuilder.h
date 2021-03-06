//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUAdSnapCreationInfoBuilder : NSObject
{
    NSNumber *_camera;
    NSNumber *_isAudioOn;
    NSString *_mediaType;
    NSNumber *_snapDurationMillis;
    NSNumber *_snapPreviewMillis;
    NSNumber *_geofilterLoadedCount;
    NSString *_filterCarouselEntryDirection;
    NSNumber *_filterSwipeCount;
}

+ (id)withJUAdSnapCreationInfo:(id)arg1;
- (void).cxx_destruct;
- (id)setFilterSwipeCount:(id)arg1;
- (id)setFilterCarouselEntryDirection:(id)arg1;
- (id)setGeofilterLoadedCount:(id)arg1;
- (id)setSnapPreviewMillis:(id)arg1;
- (id)setSnapDurationMillis:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setIsAudioOn:(id)arg1;
- (id)setCamera:(id)arg1;
- (id)build;
- (id)setFilterSwipeCountValue:(long long)arg1;
- (id)setFilterCarouselEntryDirectionEnum:(long long)arg1;
- (id)setGeofilterLoadedCountValue:(long long)arg1;
- (id)setSnapPreviewMillisValue:(long long)arg1;
- (id)setSnapDurationMillisValue:(long long)arg1;
- (id)setIsAudioOnValue:(_Bool)arg1;
- (id)setCameraValue:(long long)arg1;

@end

