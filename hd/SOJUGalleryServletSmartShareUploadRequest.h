//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUGalleryServletSmartShareUploadRequest.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletSmartShareUploadRequest : NSObject <SOJUGalleryServletSmartShareUploadRequest>
{
    NSString *_mediaId;
    NSNumber *_mediaType;
    NSString *_mediaKey;
    NSString *_mediaIv;
    NSString *_snapId;
    NSNumber *_destination;
    NSNumber *_orientation;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSNumber *destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
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
- (id)initWithMediaId:(id)arg1 mediaType:(id)arg2 mediaKey:(id)arg3 mediaIv:(id)arg4 snapId:(id)arg5 destination:(id)arg6 orientation:(id)arg7;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)orientationEnum;
- (int)orientationValue;
- (long long)destinationEnum;
- (int)destinationValue;
- (int)mediaTypeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

