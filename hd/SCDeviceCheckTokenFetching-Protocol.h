//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol SCDeviceCheckTokenFetching
- (_Bool)isErrorDeviceCheckCode:(NSString *)arg1;
- (void)generateDeviceTokenWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)fetchDeviceTokenWithCompletionHandler:(void (^)(NSString *))arg1;
@end

