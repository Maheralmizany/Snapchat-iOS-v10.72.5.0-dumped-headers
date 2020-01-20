//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUCommerceCustomImageFrame.h"

@class NSNumber, NSString;

@interface SOJUCommerceCustomImageFrame : NSObject <SOJUCommerceCustomImageFrame>
{
    NSNumber *_topLeftX;
    NSNumber *_topLeftY;
    NSNumber *_frameHeight;
    NSNumber *_frameWidth;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *frameWidth; // @synthesize frameWidth=_frameWidth;
@property(readonly, copy, nonatomic) NSNumber *frameHeight; // @synthesize frameHeight=_frameHeight;
@property(readonly, copy, nonatomic) NSNumber *topLeftY; // @synthesize topLeftY=_topLeftY;
@property(readonly, copy, nonatomic) NSNumber *topLeftX; // @synthesize topLeftX=_topLeftX;
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
- (id)initWithTopLeftX:(id)arg1 topLeftY:(id)arg2 frameHeight:(id)arg3 frameWidth:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)frameWidthValue;
- (int)frameHeightValue;
- (int)topLeftYValue;
- (int)topLeftXValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

