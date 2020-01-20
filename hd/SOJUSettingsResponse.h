//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUSettingsResponse.h"

@class NSArray, NSNumber, NSString;

@interface SOJUSettingsResponse : NSObject <SOJUSettingsResponse>
{
    NSNumber *_logged;
    NSNumber *_status;
    NSString *_message;
    NSString *_param;
    NSArray *_twoFaVerifiedDevices;
    NSString *_twoFaRecoveryCode;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *twoFaRecoveryCode; // @synthesize twoFaRecoveryCode=_twoFaRecoveryCode;
@property(readonly, copy, nonatomic) NSArray *twoFaVerifiedDevices; // @synthesize twoFaVerifiedDevices=_twoFaVerifiedDevices;
@property(readonly, copy, nonatomic) NSString *param; // @synthesize param=_param;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSNumber *logged; // @synthesize logged=_logged;
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
- (id)initWithLogged:(id)arg1 status:(id)arg2 message:(id)arg3 param:(id)arg4 twoFaVerifiedDevices:(id)arg5 twoFaRecoveryCode:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)statusValue;
- (_Bool)loggedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

