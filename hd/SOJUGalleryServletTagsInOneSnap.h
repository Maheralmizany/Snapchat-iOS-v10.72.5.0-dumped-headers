//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUGalleryServletTagsInOneSnap.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOJUGalleryServletTagsInOneSnap : NSObject <SOJUGalleryServletTagsInOneSnap>
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

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *noisinessScore; // @synthesize noisinessScore=_noisinessScore;
@property(readonly, copy, nonatomic) NSNumber *lightingQualityScore; // @synthesize lightingQualityScore=_lightingQualityScore;
@property(readonly, copy, nonatomic) NSNumber *blurrinessScore; // @synthesize blurrinessScore=_blurrinessScore;
@property(readonly, copy, nonatomic) NSNumber *qualityScore; // @synthesize qualityScore=_qualityScore;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *locationCluster; // @synthesize locationCluster=_locationCluster;
@property(readonly, copy, nonatomic) NSString *tagCluster; // @synthesize tagCluster=_tagCluster;
@property(readonly, copy, nonatomic) NSString *languageId; // @synthesize languageId=_languageId;
@property(readonly, copy, nonatomic) NSDictionary *visualTagToConfidenceMap; // @synthesize visualTagToConfidenceMap=_visualTagToConfidenceMap;
@property(readonly, copy, nonatomic) NSArray *metaTagList; // @synthesize metaTagList=_metaTagList;
@property(readonly, copy, nonatomic) NSArray *timeTagList; // @synthesize timeTagList=_timeTagList;
@property(readonly, copy, nonatomic) NSArray *locationTagList; // @synthesize locationTagList=_locationTagList;
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
- (id)initWithLocationTagList:(id)arg1 timeTagList:(id)arg2 metaTagList:(id)arg3 visualTagToConfidenceMap:(id)arg4 languageId:(id)arg5 tagCluster:(id)arg6 locationCluster:(id)arg7 caption:(id)arg8 qualityScore:(id)arg9 blurrinessScore:(id)arg10 lightingQualityScore:(id)arg11 noisinessScore:(id)arg12;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (double)noisinessScoreValue;
- (double)lightingQualityScoreValue;
- (double)blurrinessScoreValue;
- (double)qualityScoreValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

