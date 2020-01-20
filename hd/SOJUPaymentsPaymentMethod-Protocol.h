//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUPaymentsCreditCard, SOJUPaymentsVaultedCreditAccount;

@protocol SOJUPaymentsPaymentMethod <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUPaymentsVaultedCreditAccount *vaultedCreditAccount;
@property(readonly, copy, nonatomic) SOJUPaymentsCreditCard *creditCard;
@property(readonly, copy, nonatomic) NSNumber *isDefault;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *idValue;
@end

