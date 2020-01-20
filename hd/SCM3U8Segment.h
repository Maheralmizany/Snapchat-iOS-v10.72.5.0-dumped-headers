//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURL, NSValue;

@interface SCM3U8Segment : NSObject <NSCopying>
{
    NSURL *_url;
    double _duration;
    NSValue *_byteRangeValue;
}

@property(readonly, copy, nonatomic) NSValue *byteRangeValue; // @synthesize byteRangeValue=_byteRangeValue;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUrl:(id)arg1 duration:(double)arg2 byteRangeValue:(id)arg3;

@end
