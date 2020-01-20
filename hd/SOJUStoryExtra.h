//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUStoryExtra.h"

@class NSNumber, NSString;

@interface SOJUStoryExtra : NSObject <SOJUStoryExtra>
{
    NSNumber *_viewCount;
    NSNumber *_screenshotCount;
    NSNumber *_screenCaptureShotCount;
    NSNumber *_screenCaptureRecordingCount;
    NSNumber *_snapSaveCount;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *snapSaveCount; // @synthesize snapSaveCount=_snapSaveCount;
@property(readonly, copy, nonatomic) NSNumber *screenCaptureRecordingCount; // @synthesize screenCaptureRecordingCount=_screenCaptureRecordingCount;
@property(readonly, copy, nonatomic) NSNumber *screenCaptureShotCount; // @synthesize screenCaptureShotCount=_screenCaptureShotCount;
@property(readonly, copy, nonatomic) NSNumber *screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, copy, nonatomic) NSNumber *viewCount; // @synthesize viewCount=_viewCount;
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
- (id)initWithViewCount:(id)arg1 screenshotCount:(id)arg2 screenCaptureShotCount:(id)arg3 screenCaptureRecordingCount:(id)arg4 snapSaveCount:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)snapSaveCountValue;
- (int)screenCaptureRecordingCountValue;
- (int)screenCaptureShotCountValue;
- (int)screenshotCountValue;
- (int)viewCountValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

