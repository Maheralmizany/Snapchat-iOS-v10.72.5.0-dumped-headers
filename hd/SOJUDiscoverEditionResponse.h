//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUDiscoverEditionResponse.h"

@class NSNumber, NSString, SOJUDiscoverChannelResponse;

@interface SOJUDiscoverEditionResponse : NSObject <SOJUDiscoverEditionResponse>
{
    SOJUDiscoverChannelResponse *_channel;
    NSString *_validity;
    NSNumber *_generationTs;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *generationTs; // @synthesize generationTs=_generationTs;
@property(readonly, copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(readonly, copy, nonatomic) SOJUDiscoverChannelResponse *channel; // @synthesize channel=_channel;
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
- (id)initWithChannel:(id)arg1 validity:(id)arg2 generationTs:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)generationTsValue;
- (long long)validityEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

