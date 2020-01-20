//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUHourlyForecast.h"

@class NSNumber, NSString;

@interface SOJUHourlyForecast : NSObject <SOJUHourlyForecast>
{
    NSNumber *_fahrenheit;
    NSNumber *_celsius;
    NSString *_weatherCondition;
    NSString *_displayTime;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *displayTime; // @synthesize displayTime=_displayTime;
@property(readonly, copy, nonatomic) NSString *weatherCondition; // @synthesize weatherCondition=_weatherCondition;
@property(readonly, copy, nonatomic) NSNumber *celsius; // @synthesize celsius=_celsius;
@property(readonly, copy, nonatomic) NSNumber *fahrenheit; // @synthesize fahrenheit=_fahrenheit;
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
- (id)initWithFahrenheit:(id)arg1 celsius:(id)arg2 weatherCondition:(id)arg3 displayTime:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)weatherConditionEnum;
- (float)celsiusValue;
- (float)fahrenheitValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

