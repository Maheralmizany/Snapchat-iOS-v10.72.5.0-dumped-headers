//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUSubscriptionSubscribedEntity.h"

@class NSNumber, NSString;

@interface SOJUSubscriptionSubscribedEntity : NSObject <SOJUSubscriptionSubscribedEntity>
{
    NSString *_entityId;
    NSString *_entityType;
    NSNumber *_lastUpdatedTimestamp;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
@property(readonly, copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
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
- (id)initWithEntityId:(id)arg1 entityType:(id)arg2 lastUpdatedTimestamp:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)lastUpdatedTimestampValue;
- (long long)entityTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

