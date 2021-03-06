//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSError, NSString, SCPaymentsCard, SCPaymentsLineOfCredit;

@interface SCPaymentsMethodWrapper : NSObject <NSCoding>
{
    _Bool _isPrimary;
    _Bool _didFailValidation;
    NSString *_identifier;
    unsigned long long _type;
    SCPaymentsCard *_card;
    SCPaymentsLineOfCredit *_lineOfCredit;
    NSError *_cardError;
}

@property(retain, nonatomic) NSError *cardError; // @synthesize cardError=_cardError;
@property(nonatomic) _Bool didFailValidation; // @synthesize didFailValidation=_didFailValidation;
@property(readonly, nonatomic) SCPaymentsLineOfCredit *lineOfCredit; // @synthesize lineOfCredit=_lineOfCredit;
@property(readonly, nonatomic) SCPaymentsCard *card; // @synthesize card=_card;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)_isValid;
- (id)toSOJUModel;
- (_Bool)isValidModel;
- (id)stringType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentsCard:(id)arg1;
- (id)initWithSOJUModel:(id)arg1;

@end

