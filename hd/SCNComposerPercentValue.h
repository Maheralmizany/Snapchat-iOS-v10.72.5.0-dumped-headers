//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNComposerPercentValue : NSObject
{
    double _value;
    long long _type;
}

+ (id)PercentValueWithValue:(double)arg1 type:(long long)arg2;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (id)description;
- (id)initWithValue:(double)arg1 type:(long long)arg2;

@end
