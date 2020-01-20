//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate;

@interface SCDiscoverFeedInteractionEventIntegerType : NSObject <NSCopying, NSCoding>
{
    long long _value;
    NSDate *_timestamp;
}

@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long value; // @synthesize value=_value;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValue:(long long)arg1 timestamp:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

