//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCDiscoverFeedStoryIHEventBool : NSObject <NSCopying>
{
    _Bool _value;
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) _Bool value; // @synthesize value=_value;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValue:(_Bool)arg1 timestamp:(double)arg2;

@end
