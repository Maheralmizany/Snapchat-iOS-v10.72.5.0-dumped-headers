//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUGalleryServletSnapResult.h"

@class NSDictionary, NSNumber, NSString;

@interface SOJUGalleryServletSnapResult : NSObject <SOJUGalleryServletSnapResult>
{
    NSString *_snapId;
    NSNumber *_statusCode;
    NSString *_debugInfo;
    NSNumber *_mediaUploaded;
    NSString *_mediaUrl;
    NSString *_overlayUrl;
    NSString *_thumbnailUrl;
    NSDictionary *_mediaUploadHeaders;
    NSDictionary *_overlayUploadHeaders;
    NSDictionary *_thumbnailUploadHeaders;
    NSString *_mediaRedirectUri;
    NSString *_overlayImageRedirectUri;
    NSString *_thumbnailRedirectUri;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *thumbnailRedirectUri; // @synthesize thumbnailRedirectUri=_thumbnailRedirectUri;
@property(readonly, copy, nonatomic) NSString *overlayImageRedirectUri; // @synthesize overlayImageRedirectUri=_overlayImageRedirectUri;
@property(readonly, copy, nonatomic) NSString *mediaRedirectUri; // @synthesize mediaRedirectUri=_mediaRedirectUri;
@property(readonly, copy, nonatomic) NSDictionary *thumbnailUploadHeaders; // @synthesize thumbnailUploadHeaders=_thumbnailUploadHeaders;
@property(readonly, copy, nonatomic) NSDictionary *overlayUploadHeaders; // @synthesize overlayUploadHeaders=_overlayUploadHeaders;
@property(readonly, copy, nonatomic) NSDictionary *mediaUploadHeaders; // @synthesize mediaUploadHeaders=_mediaUploadHeaders;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSString *overlayUrl; // @synthesize overlayUrl=_overlayUrl;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, copy, nonatomic) NSNumber *mediaUploaded; // @synthesize mediaUploaded=_mediaUploaded;
@property(readonly, copy, nonatomic) NSString *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(readonly, copy, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
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
- (id)initWithSnapId:(id)arg1 statusCode:(id)arg2 debugInfo:(id)arg3 mediaUploaded:(id)arg4 mediaUrl:(id)arg5 overlayUrl:(id)arg6 thumbnailUrl:(id)arg7 mediaUploadHeaders:(id)arg8 overlayUploadHeaders:(id)arg9 thumbnailUploadHeaders:(id)arg10 mediaRedirectUri:(id)arg11 overlayImageRedirectUri:(id)arg12 thumbnailRedirectUri:(id)arg13;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)mediaUploadedValue;
- (long long)statusCodeEnum;
- (int)statusCodeValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

