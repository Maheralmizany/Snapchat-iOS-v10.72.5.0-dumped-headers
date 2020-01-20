//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAirPreferenceInfo.h"

@class NSArray, NSString;

@interface SOJUAirPreferenceInfo : NSObject <SOJUAirPreferenceInfo>
{
    NSArray *_experiment;
    NSArray *_setting;
    NSArray *_tweak;
    NSArray *_serverSetting;
    NSArray *_featureSetting;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *featureSetting; // @synthesize featureSetting=_featureSetting;
@property(readonly, copy, nonatomic) NSArray *serverSetting; // @synthesize serverSetting=_serverSetting;
@property(readonly, copy, nonatomic) NSArray *tweak; // @synthesize tweak=_tweak;
@property(readonly, copy, nonatomic) NSArray *setting; // @synthesize setting=_setting;
@property(readonly, copy, nonatomic) NSArray *experiment; // @synthesize experiment=_experiment;
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
- (id)initWithExperiment:(id)arg1 setting:(id)arg2 tweak:(id)arg3 serverSetting:(id)arg4 featureSetting:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

