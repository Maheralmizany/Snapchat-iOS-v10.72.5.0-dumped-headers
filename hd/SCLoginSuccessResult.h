//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCLoginOdlvChallenge, SCLoginReactivationStatus, SCLoginTwoFAChallenge;

@interface SCLoginSuccessResult : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCLoginOdlvChallenge *_odlvRequired_challenge;
    SCLoginTwoFAChallenge *_otpTwoFARequired_challenge;
    _Bool _otpTwoFARequired_smsEnabled;
    SCLoginTwoFAChallenge *_smsTwoFARequired_challenge;
    SCLoginReactivationStatus *_reactivation_status;
}

+ (id)success;
+ (id)smsTwoFARequiredWithChallenge:(id)arg1;
+ (id)reactivationWithStatus:(id)arg1;
+ (id)otpTwoFARequiredWithChallenge:(id)arg1 smsEnabled:(_Bool)arg2;
+ (id)odlvRequiredWithChallenge:(id)arg1;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 odlvRequired:(CDUnknownBlockType)arg2 otpTwoFARequired:(CDUnknownBlockType)arg3 smsTwoFARequired:(CDUnknownBlockType)arg4 reactivation:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

