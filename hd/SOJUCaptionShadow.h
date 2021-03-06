//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUCaptionShadow.h"

@class NSNumber, NSString;

@interface SOJUCaptionShadow : NSObject <SOJUCaptionShadow>
{
    NSNumber *_color;
    NSNumber *_offsetX;
    NSNumber *_offsetY;
    NSNumber *_radius;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *radius; // @synthesize radius=_radius;
@property(readonly, copy, nonatomic) NSNumber *offsetY; // @synthesize offsetY=_offsetY;
@property(readonly, copy, nonatomic) NSNumber *offsetX; // @synthesize offsetX=_offsetX;
@property(readonly, copy, nonatomic) NSNumber *color; // @synthesize color=_color;
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
- (id)initWithColor:(id)arg1 offsetX:(id)arg2 offsetY:(id)arg3 radius:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (double)radiusValue;
- (double)offsetYValue;
- (double)offsetXValue;
- (int)colorValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

