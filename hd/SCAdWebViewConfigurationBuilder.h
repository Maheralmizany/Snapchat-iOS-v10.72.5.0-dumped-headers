//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface SCAdWebViewConfigurationBuilder : NSObject
{
    NSURL *_url;
    _Bool _enableAutoFill;
    _Bool _reportJavaScriptPerformance;
    NSString *_hitURLRegex;
    _Bool _sharable;
    _Bool _enableHeaderActionButton;
    _Bool _enablePreloading;
    _Bool _enablePrefetchRootHTML;
    _Bool _disableSwipeDownToDismiss;
    _Bool _delayLoadUntilWebviewScheduledToTakeOver;
    _Bool _resetOnDismiss;
    double _resetOnDismissMaxProgress;
}

+ (id)adWebViewConfigurationFromExistingAdWebViewConfiguration:(id)arg1;
+ (id)adWebViewConfiguration;
- (void).cxx_destruct;
- (id)withResetOnDismissMaxProgress:(double)arg1;
- (id)withResetOnDismiss:(_Bool)arg1;
- (id)withDelayLoadUntilWebviewScheduledToTakeOver:(_Bool)arg1;
- (id)withDisableSwipeDownToDismiss:(_Bool)arg1;
- (id)withEnablePrefetchRootHTML:(_Bool)arg1;
- (id)withEnablePreloading:(_Bool)arg1;
- (id)withEnableHeaderActionButton:(_Bool)arg1;
- (id)withSharable:(_Bool)arg1;
- (id)withHitURLRegex:(id)arg1;
- (id)withReportJavaScriptPerformance:(_Bool)arg1;
- (id)withEnableAutoFill:(_Bool)arg1;
- (id)withUrl:(id)arg1;
- (id)build;

@end

