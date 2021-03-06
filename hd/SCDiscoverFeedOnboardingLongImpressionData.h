//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, SCDiscoverFeedOnboardingLoggingData;

@interface SCDiscoverFeedOnboardingLongImpressionData : NSObject <NSCopying>
{
    SCDiscoverFeedOnboardingLoggingData *_loggingData;
    NSDate *_startDate;
    double _duration;
}

@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) SCDiscoverFeedOnboardingLoggingData *loggingData; // @synthesize loggingData=_loggingData;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLoggingData:(id)arg1 startDate:(id)arg2 duration:(double)arg3;

@end

