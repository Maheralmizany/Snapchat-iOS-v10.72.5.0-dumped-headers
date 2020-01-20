//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUBroadcastMobsApiUpdateMobStoryRequest.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastMobsModelLocation;

@interface SOJUBroadcastMobsApiUpdateMobStoryRequest : NSObject <SOJUBroadcastMobsApiUpdateMobStoryRequest>
{
    NSString *_idValue;
    NSString *_typeVal;
    NSString *_displayName;
    NSArray *_contributors;
    SOJUBroadcastMobsModelLocation *_geoFenceCenter;
    NSString *_geoSubtext;
    NSString *_privacyType;
    NSArray *_viewers;
    NSNumber *_enableAutosave;
    NSString *_mischiefId;
    NSString *_customMobStorySubtype;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *customMobStorySubtype; // @synthesize customMobStorySubtype=_customMobStorySubtype;
@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(readonly, copy, nonatomic) NSNumber *enableAutosave; // @synthesize enableAutosave=_enableAutosave;
@property(readonly, copy, nonatomic) NSArray *viewers; // @synthesize viewers=_viewers;
@property(readonly, copy, nonatomic) NSString *privacyType; // @synthesize privacyType=_privacyType;
@property(readonly, copy, nonatomic) NSString *geoSubtext; // @synthesize geoSubtext=_geoSubtext;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelLocation *geoFenceCenter; // @synthesize geoFenceCenter=_geoFenceCenter;
@property(readonly, copy, nonatomic) NSArray *contributors; // @synthesize contributors=_contributors;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *typeVal; // @synthesize typeVal=_typeVal;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
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
- (id)initWithIdValue:(id)arg1 typeVal:(id)arg2 displayName:(id)arg3 contributors:(id)arg4 geoFenceCenter:(id)arg5 geoSubtext:(id)arg6 privacyType:(id)arg7 viewers:(id)arg8 enableAutosave:(id)arg9 mischiefId:(id)arg10 customMobStorySubtype:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)customMobStorySubtypeEnum;
- (_Bool)enableAutosaveValue;
- (long long)privacyTypeEnum;
- (long long)typeValEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

