//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SOJUScannableAnalyticsSnapcodeDailyMetrics, SOJUScannableAnalyticsSnapcodeTotalMetrics;

@protocol SCSnapcodeAnalyticsProviderDelegate <NSObject>
- (void)handleErrorWithResponseDictionary:(NSDictionary *)arg1 errorData:(NSString *)arg2;

@optional
- (void)handleSuccessWithTotalMetrics:(SOJUScannableAnalyticsSnapcodeTotalMetrics *)arg1;
- (void)handleSuccessWithDailyMetrics:(SOJUScannableAnalyticsSnapcodeDailyMetrics *)arg1 startDate:(NSString *)arg2 endDate:(NSString *)arg3;
@end

