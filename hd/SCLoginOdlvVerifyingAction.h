//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCLoginOdlvVerifyingAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_updatedConfirmationCode_confirmationCode;
}

+ (id)updatedConfirmationCodeWithConfirmationCode:(id)arg1;
+ (id)timerExpired;
+ (id)submit;
+ (id)hadTroubleVerifying;
+ (id)exit;
+ (id)dismissErrorAlertForVerifyingTrouble;
+ (id)dismissErrorAlertForRequestingOtp;
+ (id)dismissErrorAlertForLogin;
- (void).cxx_destruct;
- (void)matchDismissErrorAlertForLogin:(CDUnknownBlockType)arg1 dismissErrorAlertForRequestingOtp:(CDUnknownBlockType)arg2 dismissErrorAlertForVerifyingTrouble:(CDUnknownBlockType)arg3 hadTroubleVerifying:(CDUnknownBlockType)arg4 timerExpired:(CDUnknownBlockType)arg5 updatedConfirmationCode:(CDUnknownBlockType)arg6 submit:(CDUnknownBlockType)arg7 exit:(CDUnknownBlockType)arg8;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

