//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol SOJUPaymentsBillingAddress <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, copy, nonatomic) NSString *postalCode;
@property(readonly, copy, nonatomic) NSString *state;
@property(readonly, copy, nonatomic) NSString *city;
@property(readonly, copy, nonatomic) NSString *addressLine2;
@property(readonly, copy, nonatomic) NSString *addressLine1;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
@end

