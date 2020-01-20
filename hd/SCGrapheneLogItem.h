//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCGrapheneMetric;

@interface SCGrapheneLogItem : NSObject
{
    NSString *_uniqueId;
    double _startTimestamp;
    SCGrapheneMetric *_metric;
}

@property(retain, nonatomic) SCGrapheneMetric *metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (id)initWithUniqueId:(id)arg1 startTimestamp:(double)arg2 grapheneMetric:(id)arg3;

@end
