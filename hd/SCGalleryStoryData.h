//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryStoryData.h"

@class LSADepthMetadata, NSData, NSNumber, NSString, SOJUGallerySnapOverlay;

@interface SCGalleryStoryData : NSObject <SCGalleryStoryData>
{
    SOJUGallerySnapOverlay *_sojuOverlay;
    NSData *_renderedOverlay;
    NSData *_originalMedia;
    NSNumber *_mediaType;
    NSString *_servletMediaFormat;
    LSADepthMetadata *_lsaDepthMetadata;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) LSADepthMetadata *lsaDepthMetadata; // @synthesize lsaDepthMetadata=_lsaDepthMetadata;
@property(readonly, copy, nonatomic) NSString *servletMediaFormat; // @synthesize servletMediaFormat=_servletMediaFormat;
@property(readonly, copy, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSData *originalMedia; // @synthesize originalMedia=_originalMedia;
@property(readonly, copy, nonatomic) NSData *renderedOverlay; // @synthesize renderedOverlay=_renderedOverlay;
@property(readonly, copy, nonatomic) SOJUGallerySnapOverlay *sojuOverlay; // @synthesize sojuOverlay=_sojuOverlay;
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
- (id)initWithSojuOverlay:(id)arg1 renderedOverlay:(id)arg2 originalMedia:(id)arg3 mediaType:(id)arg4 servletMediaFormat:(id)arg5 lsaDepthMetadata:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

