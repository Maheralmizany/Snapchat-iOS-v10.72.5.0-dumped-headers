//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPhoneNumberFormatter.h"

@class NSString, SCPhoneNumberAsYouTypeFormatterWrapper;

@interface SCPhoneNumberDefaultFormatter : NSObject <SCPhoneNumberFormatter>
{
    SCPhoneNumberAsYouTypeFormatterWrapper *asYouTypeFormatterWrapper;
}

- (void).cxx_destruct;
- (id)getPhoneNumberFromCurrentPhone:(id)arg1 newPhone:(id)arg2 range:(struct _NSRange)arg3 countryCode:(id)arg4;
- (id)stripDigitsFromPhoneNumber:(id)arg1;
- (_Bool)isValidClientPhoneNumberFormat:(id)arg1;
- (id)getPhoneCountryCodes;
- (id)getCurrentOrUSDefaultCountryCode;
- (unsigned int)getCountryCodeForRegion:(id)arg1;
- (id)normalizeDigitsOnly:(id)arg1;
- (id)formatAsYouTypePhoneNumber:(id)arg1 withCountryCode:(id)arg2;
- (id)formatPhoneNumber:(id)arg1 withCountryCode:(id)arg2;
- (id)getFormattedCountryCodeForRegion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

