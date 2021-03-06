//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdIdentityResponse.h"

@class NSString;

@interface SOJUAdIdentityResponse : NSObject <SOJUAdIdentityResponse>
{
    NSString *_rawUserData;
    NSString *_userAdId;
    NSString *_trackHostAndPath;
    NSString *_thirdPartyTrackHostAndPath;
    NSString *_trackRequestCookie;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *trackRequestCookie; // @synthesize trackRequestCookie=_trackRequestCookie;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackHostAndPath; // @synthesize thirdPartyTrackHostAndPath=_thirdPartyTrackHostAndPath;
@property(readonly, copy, nonatomic) NSString *trackHostAndPath; // @synthesize trackHostAndPath=_trackHostAndPath;
@property(readonly, copy, nonatomic) NSString *userAdId; // @synthesize userAdId=_userAdId;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
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
- (id)initWithRawUserData:(id)arg1 userAdId:(id)arg2 trackHostAndPath:(id)arg3 thirdPartyTrackHostAndPath:(id)arg4 trackRequestCookie:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

