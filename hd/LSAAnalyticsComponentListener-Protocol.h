//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSAAnalyticsComponent, NSArray, NSDictionary, NSString;

@protocol LSAAnalyticsComponentListener <NSObject>
- (void)analyticsComponent:(LSAAnalyticsComponent *)arg1 didChangeContent:(NSString *)arg2 effectId:(NSString *)arg3;
- (void)analyticsComponent:(LSAAnalyticsComponent *)arg1 didPrepareEventAnalyticsReport:(NSArray *)arg2 effectId:(NSString *)arg3;
- (void)analyticsComponent:(LSAAnalyticsComponent *)arg1 didPreparePerformanceAnalyticsReport:(NSDictionary *)arg2;
@end

