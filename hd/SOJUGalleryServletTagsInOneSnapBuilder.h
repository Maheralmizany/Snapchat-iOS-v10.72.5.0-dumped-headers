//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUGalleryServletTagsInOneSnapBuilder : NSObject
{
    NSArray *_locationTagList;
    NSArray *_timeTagList;
    NSArray *_metaTagList;
    NSDictionary *_visualTagToConfidenceMap;
    NSString *_languageId;
    NSString *_tagCluster;
    NSString *_locationCluster;
    NSString *_caption;
    NSNumber *_qualityScore;
    NSNumber *_blurrinessScore;
    NSNumber *_lightingQualityScore;
    NSNumber *_noisinessScore;
}

+ (id)withJUGalleryServletTagsInOneSnap:(id)arg1;
- (void).cxx_destruct;
- (id)setNoisinessScore:(id)arg1;
- (id)setLightingQualityScore:(id)arg1;
- (id)setBlurrinessScore:(id)arg1;
- (id)setQualityScore:(id)arg1;
- (id)setCaption:(id)arg1;
- (id)setLocationCluster:(id)arg1;
- (id)setTagCluster:(id)arg1;
- (id)setLanguageId:(id)arg1;
- (id)setVisualTagToConfidenceMap:(id)arg1;
- (id)setMetaTagList:(id)arg1;
- (id)setTimeTagList:(id)arg1;
- (id)setLocationTagList:(id)arg1;
- (id)build;
- (id)setNoisinessScoreValue:(double)arg1;
- (id)setLightingQualityScoreValue:(double)arg1;
- (id)setBlurrinessScoreValue:(double)arg1;
- (id)setQualityScoreValue:(double)arg1;

@end

