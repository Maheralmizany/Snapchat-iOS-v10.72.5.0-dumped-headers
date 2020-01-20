//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface SCSearchRetryPolicy : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    double _equallyInterval_retryInterval;
    unsigned long long _equallyInterval_retryCount;
    double _exponentialBackoff_initialRetryInterval;
    unsigned long long _exponentialBackoff_retryCount;
}

+ (id)noRetry;
+ (id)exponentialBackoffWithInitialRetryInterval:(double)arg1 retryCount:(unsigned long long)arg2;
+ (id)equallyIntervalWithRetryInterval:(double)arg1 retryCount:(unsigned long long)arg2;
- (void)matchNoRetry:(CDUnknownBlockType)arg1 equallyInterval:(CDUnknownBlockType)arg2 exponentialBackoff:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

