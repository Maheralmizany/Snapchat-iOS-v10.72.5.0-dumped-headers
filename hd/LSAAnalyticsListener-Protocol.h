//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol LSAAnalyticsListener <NSObject>
- (void)didChangeContent:(NSString *)arg1;
- (void)didPrepareEffectAnalyticEventsForEffectId:(NSString *)arg1 analyticsManager:(struct AnalyticsManager *)arg2;
- (void)didPreparePerformanceReport:(NSDictionary *)arg1;
@end
