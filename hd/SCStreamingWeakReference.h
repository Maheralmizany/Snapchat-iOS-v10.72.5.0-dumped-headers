//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCStreamingWeakReference : NSObject <NSCopying>
{
    unsigned long long _hash;
    id _value;
}

@property(readonly, nonatomic) __weak id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithValue:(id)arg1;

@end

