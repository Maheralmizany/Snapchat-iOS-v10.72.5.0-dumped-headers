//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol SCPhoneCodeVerifier
- (void)requestPhoneCodeWithDeliveryMechanism:(unsigned long long)arg1 completion:(void (^)(unsigned long long))arg2;
- (void)verifyPhoneCode:(NSString *)arg1 completion:(void (^)(unsigned long long, NSString *))arg2;
@end

