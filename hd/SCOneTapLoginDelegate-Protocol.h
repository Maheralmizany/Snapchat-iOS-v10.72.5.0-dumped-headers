//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCFideliusTempDeviceUserInfo, SOJULoginResponse;

@protocol SCOneTapLoginDelegate
- (void)oneTapLoginFinishedWithLoginResponse:(SOJULoginResponse *)arg1 tempIdentity:(SCFideliusTempDeviceUserInfo *)arg2;
- (void)oneTapLoginExited;
- (void)signUpSelected;
- (void)logInSelected;
@end

