//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUGalleryGeoFilter.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUDynamicContentSetting, SOJUUnlockablesArSegmentationFilter, SOJUUnlockablesAudio, SOJUUnlockablesAutoStacking, SOJUUnlockablesCarouselGroup, SOJUUnlockablesPostCaptureLensData;

@interface SOJUGalleryGeoFilter : NSObject <SOJUGalleryGeoFilter>
{
    NSString *_type;
    NSString *_unlockableContentType;
    NSString *_idValue;
    NSString *_imageUrl;
    NSDictionary *_imageUrlParams;
    NSArray *_dynamicContent;
    NSString *_scaleSetting;
    NSString *_positionSetting;
    NSNumber *_belowDrawingLayer;
    NSNumber *_isSponsored;
    NSArray *_geofilterMarkups;
    SOJUDynamicContentSetting *_dynamicContentSetting;
    SOJUUnlockablesAutoStacking *_autoStacking;
    NSNumber *_isAnimated;
    SOJUUnlockablesArSegmentationFilter *_arSegmentation;
    SOJUUnlockablesCarouselGroup *_carouselGroup;
    SOJUUnlockablesAudio *_audio;
    SOJUUnlockablesPostCaptureLensData *_postCaptureLensDataDeprecated;
    NSNumber *_isUnifiedCameraObject;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *isUnifiedCameraObject; // @synthesize isUnifiedCameraObject=_isUnifiedCameraObject;
@property(readonly, copy, nonatomic) SOJUUnlockablesPostCaptureLensData *postCaptureLensDataDeprecated; // @synthesize postCaptureLensDataDeprecated=_postCaptureLensDataDeprecated;
@property(readonly, copy, nonatomic) SOJUUnlockablesAudio *audio; // @synthesize audio=_audio;
@property(readonly, copy, nonatomic) SOJUUnlockablesCarouselGroup *carouselGroup; // @synthesize carouselGroup=_carouselGroup;
@property(readonly, copy, nonatomic) SOJUUnlockablesArSegmentationFilter *arSegmentation; // @synthesize arSegmentation=_arSegmentation;
@property(readonly, copy, nonatomic) NSNumber *isAnimated; // @synthesize isAnimated=_isAnimated;
@property(readonly, copy, nonatomic) SOJUUnlockablesAutoStacking *autoStacking; // @synthesize autoStacking=_autoStacking;
@property(readonly, copy, nonatomic) SOJUDynamicContentSetting *dynamicContentSetting; // @synthesize dynamicContentSetting=_dynamicContentSetting;
@property(readonly, copy, nonatomic) NSArray *geofilterMarkups; // @synthesize geofilterMarkups=_geofilterMarkups;
@property(readonly, copy, nonatomic) NSNumber *isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, copy, nonatomic) NSNumber *belowDrawingLayer; // @synthesize belowDrawingLayer=_belowDrawingLayer;
@property(readonly, copy, nonatomic) NSString *positionSetting; // @synthesize positionSetting=_positionSetting;
@property(readonly, copy, nonatomic) NSString *scaleSetting; // @synthesize scaleSetting=_scaleSetting;
@property(readonly, copy, nonatomic) NSArray *dynamicContent; // @synthesize dynamicContent=_dynamicContent;
@property(readonly, copy, nonatomic) NSDictionary *imageUrlParams; // @synthesize imageUrlParams=_imageUrlParams;
@property(readonly, copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *unlockableContentType; // @synthesize unlockableContentType=_unlockableContentType;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
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
- (id)initWithType:(id)arg1 unlockableContentType:(id)arg2 idValue:(id)arg3 imageUrl:(id)arg4 imageUrlParams:(id)arg5 dynamicContent:(id)arg6 scaleSetting:(id)arg7 positionSetting:(id)arg8 belowDrawingLayer:(id)arg9 isSponsored:(id)arg10 geofilterMarkups:(id)arg11 dynamicContentSetting:(id)arg12 autoStacking:(id)arg13 isAnimated:(id)arg14 arSegmentation:(id)arg15 carouselGroup:(id)arg16 audio:(id)arg17 postCaptureLensDataDeprecated:(id)arg18 isUnifiedCameraObject:(id)arg19;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isUnifiedCameraObjectValue;
- (_Bool)isAnimatedValue;
- (_Bool)isSponsoredValue;
- (_Bool)belowDrawingLayerValue;
- (long long)positionSettingEnum;
- (long long)scaleSettingEnum;
- (long long)unlockableContentTypeEnum;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

