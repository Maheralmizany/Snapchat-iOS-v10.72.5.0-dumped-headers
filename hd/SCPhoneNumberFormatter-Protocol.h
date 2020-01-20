//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCPhoneNumberFormatResult;

@protocol SCPhoneNumberFormatter <NSObject>
- (SCPhoneNumberFormatResult *)getPhoneNumberFromCurrentPhone:(NSString *)arg1 newPhone:(NSString *)arg2 range:(struct _NSRange)arg3 countryCode:(NSString *)arg4;
- (NSString *)stripDigitsFromPhoneNumber:(NSString *)arg1;
- (_Bool)isValidClientPhoneNumberFormat:(NSString *)arg1;
- (NSArray *)getPhoneCountryCodes;
- (NSString *)getCurrentOrUSDefaultCountryCode;
- (unsigned int)getCountryCodeForRegion:(NSString *)arg1;
- (NSString *)normalizeDigitsOnly:(NSString *)arg1;
- (NSString *)formatAsYouTypePhoneNumber:(NSString *)arg1 withCountryCode:(NSString *)arg2;
- (NSString *)formatPhoneNumber:(NSString *)arg1 withCountryCode:(NSString *)arg2;
- (NSString *)getFormattedCountryCodeForRegion:(NSString *)arg1;
@end
