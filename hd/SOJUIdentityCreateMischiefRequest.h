//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityCreateMischiefRequest.h"

@class NSArray, NSNumber, NSString, SOJUIdentityMischiefMobCreationRequest;

@interface SOJUIdentityCreateMischiefRequest : NSObject <SOJUIdentityCreateMischiefRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_uuid;
    NSString *_name;
    NSArray *_participants;
    SOJUIdentityMischiefMobCreationRequest *_mischiefMobCreationRequest;
    NSString *_mischiefCreationSource;
    NSNumber *_minimumGroupSizeDisabled;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *minimumGroupSizeDisabled; // @synthesize minimumGroupSizeDisabled=_minimumGroupSizeDisabled;
@property(readonly, copy, nonatomic) NSString *mischiefCreationSource; // @synthesize mischiefCreationSource=_mischiefCreationSource;
@property(readonly, copy, nonatomic) SOJUIdentityMischiefMobCreationRequest *mischiefMobCreationRequest; // @synthesize mischiefMobCreationRequest=_mischiefMobCreationRequest;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
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
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 uuid:(id)arg4 name:(id)arg5 participants:(id)arg6 mischiefMobCreationRequest:(id)arg7 mischiefCreationSource:(id)arg8 minimumGroupSizeDisabled:(id)arg9;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)minimumGroupSizeDisabledValue;
- (long long)mischiefCreationSourceEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

