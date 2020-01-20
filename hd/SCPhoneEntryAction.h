//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCPhoneEntryAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_countryCodeUpdated_countryCode;
    NSString *_phoneDidChange_currentPhone;
    NSString *_phoneDidChange_newPhone;
    struct _NSRange _phoneDidChange_range;
}

+ (id)updateCountryCode;
+ (id)submit;
+ (id)phoneDidChangeWithCurrentPhone:(id)arg1 newPhone:(id)arg2 range:(struct _NSRange)arg3;
+ (id)countryCodeUpdatedWithCountryCode:(id)arg1;
+ (id)countryCodeExited;
- (void).cxx_destruct;
- (void)matchUpdateCountryCode:(CDUnknownBlockType)arg1 countryCodeUpdated:(CDUnknownBlockType)arg2 countryCodeExited:(CDUnknownBlockType)arg3 phoneDidChange:(CDUnknownBlockType)arg4 submit:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
