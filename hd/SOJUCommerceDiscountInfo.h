//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUCommerceDiscountInfo.h"

@class NSNumber, NSString, SOJUCommerceCurrencyAmount;

@interface SOJUCommerceDiscountInfo : NSObject <SOJUCommerceDiscountInfo>
{
    NSNumber *_applicable;
    SOJUCommerceCurrencyAmount *_amount;
    NSString *_value;
    NSString *_valueType;
    NSNumber *_automatic;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *automatic; // @synthesize automatic=_automatic;
@property(readonly, copy, nonatomic) NSString *valueType; // @synthesize valueType=_valueType;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSNumber *applicable; // @synthesize applicable=_applicable;
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
- (id)initWithApplicable:(id)arg1 amount:(id)arg2 value:(id)arg3 valueType:(id)arg4 automatic:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)automaticValue;
- (long long)valueTypeEnum;
- (_Bool)applicableValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

