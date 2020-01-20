//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUGalleryDrawingStroke.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryDrawingStroke : NSObject <SOJUGalleryDrawingStroke>
{
    NSNumber *_color;
    NSNumber *_strokeSize;
    NSArray *_points;
    NSString *_emoji;
    NSString *_drawerType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *drawerType; // @synthesize drawerType=_drawerType;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, copy, nonatomic) NSArray *points; // @synthesize points=_points;
@property(readonly, copy, nonatomic) NSNumber *strokeSize; // @synthesize strokeSize=_strokeSize;
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
- (id)initWithColor:(id)arg1 strokeSize:(id)arg2 points:(id)arg3 emoji:(id)arg4 drawerType:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)drawerTypeEnum;
- (double)strokeSizeValue;
- (int)colorValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

