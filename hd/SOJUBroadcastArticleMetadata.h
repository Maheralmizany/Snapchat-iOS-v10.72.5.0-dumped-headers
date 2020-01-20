//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUBroadcastArticleMetadata.h"

@class NSNumber, NSString, SOJUDiscoverModerationAudience, SOJUDiscoverModerationBrandSafety;

@interface SOJUBroadcastArticleMetadata : NSObject <SOJUBroadcastArticleMetadata>
{
    NSString *_tileId;
    NSString *_headline;
    NSString *_imageUrl;
    NSNumber *_collapsedTileCropPctOffset;
    NSNumber *_horizontalTileCropPctOffset;
    NSString *_trackingId;
    NSString *_textJustification;
    NSString *_logoUrl;
    NSNumber *_verticalV2TileCropPctOffset;
    NSNumber *_horizontalV2TileCropPctOffset;
    NSNumber *_collapsedV2TileCropPctOffset;
    NSNumber *_narrowV2TileCropPctOffset;
    NSNumber *_mediumV2TileCropPctOffset;
    NSString *_logoReadStateOverlayColor;
    NSString *_logoText;
    NSString *_videoUrl;
    NSString *_logoPosition;
    NSNumber *_logoDropShadowEnabled;
    NSString *_logoDropShadowColor;
    NSString *_videoThumbnailUrl;
    NSString *_bitmojiTileTemplateId;
    SOJUDiscoverModerationAudience *_audience;
    SOJUDiscoverModerationBrandSafety *_brandSafety;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUDiscoverModerationBrandSafety *brandSafety; // @synthesize brandSafety=_brandSafety;
@property(readonly, copy, nonatomic) SOJUDiscoverModerationAudience *audience; // @synthesize audience=_audience;
@property(readonly, copy, nonatomic) NSString *bitmojiTileTemplateId; // @synthesize bitmojiTileTemplateId=_bitmojiTileTemplateId;
@property(readonly, copy, nonatomic) NSString *videoThumbnailUrl; // @synthesize videoThumbnailUrl=_videoThumbnailUrl;
@property(readonly, copy, nonatomic) NSString *logoDropShadowColor; // @synthesize logoDropShadowColor=_logoDropShadowColor;
@property(readonly, copy, nonatomic) NSNumber *logoDropShadowEnabled; // @synthesize logoDropShadowEnabled=_logoDropShadowEnabled;
@property(readonly, copy, nonatomic) NSString *logoPosition; // @synthesize logoPosition=_logoPosition;
@property(readonly, copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(readonly, copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(readonly, copy, nonatomic) NSString *logoReadStateOverlayColor; // @synthesize logoReadStateOverlayColor=_logoReadStateOverlayColor;
@property(readonly, copy, nonatomic) NSNumber *mediumV2TileCropPctOffset; // @synthesize mediumV2TileCropPctOffset=_mediumV2TileCropPctOffset;
@property(readonly, copy, nonatomic) NSNumber *narrowV2TileCropPctOffset; // @synthesize narrowV2TileCropPctOffset=_narrowV2TileCropPctOffset;
@property(readonly, copy, nonatomic) NSNumber *collapsedV2TileCropPctOffset; // @synthesize collapsedV2TileCropPctOffset=_collapsedV2TileCropPctOffset;
@property(readonly, copy, nonatomic) NSNumber *horizontalV2TileCropPctOffset; // @synthesize horizontalV2TileCropPctOffset=_horizontalV2TileCropPctOffset;
@property(readonly, copy, nonatomic) NSNumber *verticalV2TileCropPctOffset; // @synthesize verticalV2TileCropPctOffset=_verticalV2TileCropPctOffset;
@property(readonly, copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(readonly, copy, nonatomic) NSString *textJustification; // @synthesize textJustification=_textJustification;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, copy, nonatomic) NSNumber *horizontalTileCropPctOffset; // @synthesize horizontalTileCropPctOffset=_horizontalTileCropPctOffset;
@property(readonly, copy, nonatomic) NSNumber *collapsedTileCropPctOffset; // @synthesize collapsedTileCropPctOffset=_collapsedTileCropPctOffset;
@property(readonly, copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
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
- (id)initWithTileId:(id)arg1 headline:(id)arg2 imageUrl:(id)arg3 collapsedTileCropPctOffset:(id)arg4 horizontalTileCropPctOffset:(id)arg5 trackingId:(id)arg6 textJustification:(id)arg7 logoUrl:(id)arg8 verticalV2TileCropPctOffset:(id)arg9 horizontalV2TileCropPctOffset:(id)arg10 collapsedV2TileCropPctOffset:(id)arg11 narrowV2TileCropPctOffset:(id)arg12 mediumV2TileCropPctOffset:(id)arg13 logoReadStateOverlayColor:(id)arg14 logoText:(id)arg15 videoUrl:(id)arg16 logoPosition:(id)arg17 logoDropShadowEnabled:(id)arg18 logoDropShadowColor:(id)arg19 videoThumbnailUrl:(id)arg20 bitmojiTileTemplateId:(id)arg21 audience:(id)arg22 brandSafety:(id)arg23;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)logoDropShadowEnabledValue;
- (long long)mediumV2TileCropPctOffsetValue;
- (long long)narrowV2TileCropPctOffsetValue;
- (long long)collapsedV2TileCropPctOffsetValue;
- (long long)horizontalV2TileCropPctOffsetValue;
- (long long)verticalV2TileCropPctOffsetValue;
- (long long)textJustificationEnum;
- (long long)horizontalTileCropPctOffsetValue;
- (long long)collapsedTileCropPctOffsetValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
