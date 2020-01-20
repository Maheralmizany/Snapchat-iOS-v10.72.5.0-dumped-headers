//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCNFideliusFideliusMetric : NSObject
{
    long long _type;
    long long _latency;
    NSString *_result;
    NSString *_reason;
}

+ (id)FideliusMetricWithType:(long long)arg1 latency:(long long)arg2 result:(id)arg3 reason:(id)arg4;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *result; // @synthesize result=_result;
@property(readonly, nonatomic) long long latency; // @synthesize latency=_latency;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1 latency:(long long)arg2 result:(id)arg3 reason:(id)arg4;

@end

