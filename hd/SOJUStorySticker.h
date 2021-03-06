//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUStorySticker.h"

@class NSNumber, NSString;

@interface SOJUStorySticker : NSObject <SOJUStorySticker>
{
    NSString *_stickerId;
    NSString *_packId;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_centerX;
    NSNumber *_centerY;
    NSNumber *_rotation;
    NSNumber *_tracking;
    NSString *_type;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *tracking; // @synthesize tracking=_tracking;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
@property(readonly, copy, nonatomic) NSNumber *centerY; // @synthesize centerY=_centerY;
@property(readonly, copy, nonatomic) NSNumber *centerX; // @synthesize centerX=_centerX;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSString *packId; // @synthesize packId=_packId;
@property(readonly, copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
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
- (id)initWithStickerId:(id)arg1 packId:(id)arg2 width:(id)arg3 height:(id)arg4 centerX:(id)arg5 centerY:(id)arg6 rotation:(id)arg7 tracking:(id)arg8 type:(id)arg9;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)typeEnum;
- (_Bool)trackingValue;
- (float)rotationValue;
- (float)centerYValue;
- (float)centerXValue;
- (float)heightValue;
- (float)widthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

