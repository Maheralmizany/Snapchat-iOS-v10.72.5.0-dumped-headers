//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfigPerSection.h"

@class NSString, SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig;

@interface SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfigPerSection : NSObject <SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfigPerSection>
{
    NSString *_sectionId;
    SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *_lookaheadPrecache;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *lookaheadPrecache; // @synthesize lookaheadPrecache=_lookaheadPrecache;
@property(readonly, copy, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
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
- (id)initWithSectionId:(id)arg1 lookaheadPrecache:(id)arg2;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)sectionIdEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

