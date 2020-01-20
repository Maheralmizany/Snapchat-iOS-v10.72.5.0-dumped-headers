//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "F2FMetricsReporter.h"

@class NSString, SPScenario;

@interface SPFace2FaceLogger : NSObject <F2FMetricsReporter>
{
    id <SPAnalytics> _analytics;
    SPScenario *_scenario;
}

@property(retain, nonatomic) SPScenario *scenario; // @synthesize scenario=_scenario;
@property(retain, nonatomic) id <SPAnalytics> analytics; // @synthesize analytics=_analytics;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reportMetric:(unsigned long long)arg1 time:(double)arg2 framesCounter:(long long)arg3;
- (id)initWithScenario:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

