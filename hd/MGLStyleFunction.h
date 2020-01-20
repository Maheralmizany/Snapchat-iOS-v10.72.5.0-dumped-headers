//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MGLStyleValue.h"

@class NSDictionary;

@interface MGLStyleFunction : MGLStyleValue
{
    unsigned long long _interpolationMode;
    NSDictionary *_stops;
    double _interpolationBase;
}

+ (id)functionWithInterpolationBase:(double)arg1 stops:(id)arg2;
+ (id)functionWithStops:(id)arg1;
@property(nonatomic) double interpolationBase; // @synthesize interpolationBase=_interpolationBase;
@property(copy, nonatomic) NSDictionary *stops; // @synthesize stops=_stops;
@property(nonatomic) unsigned long long interpolationMode; // @synthesize interpolationMode=_interpolationMode;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithInterpolationBase:(double)arg1 stops:(id)arg2;
- (id)init;

@end
