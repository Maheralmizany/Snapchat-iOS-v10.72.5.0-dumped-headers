//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUAdDeviceDeviceInfo, SOJUAdSnapCreationInfo;

@interface SOJUAdFilterCarouselImpressionTrackBuilder : NSObject
{
    SOJUAdSnapCreationInfo *_snapCreationInfo;
    NSString *_snapSessionId;
    NSNumber *_carouselSize;
    NSArray *_filterImpressions;
    SOJUAdDeviceDeviceInfo *_deviceInfo;
}

+ (id)withJUAdFilterCarouselImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)setDeviceInfo:(id)arg1;
- (id)setFilterImpressions:(id)arg1;
- (id)setCarouselSize:(id)arg1;
- (id)setSnapSessionId:(id)arg1;
- (id)setSnapCreationInfo:(id)arg1;
- (id)build;
- (id)setCarouselSizeValue:(long long)arg1;

@end

