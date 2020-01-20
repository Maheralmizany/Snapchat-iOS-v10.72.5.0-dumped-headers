//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDate;

@interface SCCognacCachedAppList : NSObject <NSCopying, NSCoding>
{
    NSDate *_expirationTimestamp;
    NSArray *_appsArray;
}

@property(readonly, copy, nonatomic) NSArray *appsArray; // @synthesize appsArray=_appsArray;
@property(readonly, copy, nonatomic) NSDate *expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExpirationTimestamp:(id)arg1 appsArray:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

