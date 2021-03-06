//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJURichStoryRichStorySubscription.h"

@class NSString;

@interface SOJURichStoryRichStorySubscription : NSObject <SOJURichStoryRichStorySubscription>
{
    NSString *_displayName;
    NSString *_subscriptionId;
    NSString *_subscriptionType;
    NSString *_primaryColor;
    NSString *_secondaryColor;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(readonly, copy, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, copy, nonatomic) NSString *subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(readonly, copy, nonatomic) NSString *subscriptionId; // @synthesize subscriptionId=_subscriptionId;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
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
- (id)initWithDisplayName:(id)arg1 subscriptionId:(id)arg2 subscriptionType:(id)arg3 primaryColor:(id)arg4 secondaryColor:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)subscriptionTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

