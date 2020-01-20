//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCCommerceCurrency : NSObject <NSCopying>
{
    NSString *_currency;
    NSString *_amount;
}

@property(readonly, copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;

@end

