//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUUnlockablesOndemandMonetaryAmount.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandMonetaryAmount : NSObject <SOJUUnlockablesOndemandMonetaryAmount>
{
    NSString *_value;
    NSString *_currency;
    NSString *_conversionRate;
    NSNumber *_conversionRateTimestamp;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *conversionRateTimestamp; // @synthesize conversionRateTimestamp=_conversionRateTimestamp;
@property(readonly, copy, nonatomic) NSString *conversionRate; // @synthesize conversionRate=_conversionRate;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
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
- (id)initWithValue:(id)arg1 currency:(id)arg2 conversionRate:(id)arg3 conversionRateTimestamp:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)conversionRateTimestampValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

