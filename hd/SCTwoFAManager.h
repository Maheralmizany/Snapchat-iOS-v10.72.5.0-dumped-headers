//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCTraceEnabled.h"

@class NSMutableArray, NSString;

@interface SCTwoFAManager : NSObject <SCTraceEnabled, NSCoding>
{
    _Bool _isTwoFASmsEnabled;
    _Bool _isTwoFAOtpEnabled;
    NSMutableArray *_twoFAVerifiedDevices;
}

+ (id)extractErrorMessage:(id)arg1;
+ (id)path;
+ (id)shared;
@property(retain, nonatomic) NSMutableArray *twoFAVerifiedDevices; // @synthesize twoFAVerifiedDevices=_twoFAVerifiedDevices;
@property(nonatomic) _Bool isTwoFAOtpEnabled; // @synthesize isTwoFAOtpEnabled=_isTwoFAOtpEnabled;
@property(nonatomic) _Bool isTwoFASmsEnabled; // @synthesize isTwoFASmsEnabled=_isTwoFASmsEnabled;
- (void).cxx_destruct;
- (void)_updateTwoFAVerifiedDevicesWithSojuArray:(id)arg1;
- (void)enableOTPTwoFAWithSettingsService:(id)arg1 params:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)enableSMSTwoFAWithSettingsService:(id)arg1 params:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)sendSMSTwoFACodeWithSettingsService:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)disableOTPTwoFAWithSettingsService:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)disableSMSTwoFAWithSettingsService:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)forgetOneDevice:(id)arg1 settingsService:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)forgetDeviceWithSettingsService:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateUserTwoFAStatusForPhoneVerify:(id)arg1;
- (_Bool)isTwoFADisabled;
- (_Bool)isTwoFAEnabled;
- (void)clear;
- (_Bool)saveState;
- (void)setFieldsFromUpdatesResponse:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

