//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSNumber, NSString, SCNConfigConfigurationKey;

@protocol SCNConfigConfigurationMarshaller
- (NSNumber *)getIntegerValue:(SCNConfigConfigurationKey *)arg1;
- (NSNumber *)getBooleanValue:(SCNConfigConfigurationKey *)arg1;
- (NSData *)getBinaryValue:(SCNConfigConfigurationKey *)arg1;
- (NSString *)getStringValue:(SCNConfigConfigurationKey *)arg1;
- (NSNumber *)getRealValue:(SCNConfigConfigurationKey *)arg1;
- (long long)getSystemType;
@end

