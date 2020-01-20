//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchLoggingConfig.h"

@class NSDictionary, NSString;

@interface SCSearchLoggingConfig : NSObject <SCSearchLoggingConfig>
{
    NSDictionary *_samplingConfig;
    NSDictionary *_loggingChannelConfig;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSDictionary *loggingChannelConfig; // @synthesize loggingChannelConfig=_loggingChannelConfig;
@property(readonly, copy, nonatomic) NSDictionary *samplingConfig; // @synthesize samplingConfig=_samplingConfig;
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
- (id)initWithSamplingConfig:(id)arg1 loggingChannelConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

