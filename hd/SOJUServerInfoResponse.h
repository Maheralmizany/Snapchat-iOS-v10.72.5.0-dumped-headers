//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUServerInfoResponse.h"

@class NSString;

@interface SOJUServerInfoResponse : NSObject <SOJUServerInfoResponse>
{
    NSString *_serverLatency;
    NSString *_responseChecksum;
    NSString *_responseCompareResult;
    NSString *_responseCompareResultsDict;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *responseCompareResultsDict; // @synthesize responseCompareResultsDict=_responseCompareResultsDict;
@property(readonly, copy, nonatomic) NSString *responseCompareResult; // @synthesize responseCompareResult=_responseCompareResult;
@property(readonly, copy, nonatomic) NSString *responseChecksum; // @synthesize responseChecksum=_responseChecksum;
@property(readonly, copy, nonatomic) NSString *serverLatency; // @synthesize serverLatency=_serverLatency;
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
- (id)initWithServerLatency:(id)arg1 responseChecksum:(id)arg2 responseCompareResult:(id)arg3 responseCompareResultsDict:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)responseCompareResultEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

