//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface SCAdWebViewConfiguration : NSObject <NSCopying>
{
    _Bool _enableAutoFill;
    _Bool _reportJavaScriptPerformance;
    _Bool _sharable;
    _Bool _enableHeaderActionButton;
    _Bool _enablePreloading;
    _Bool _enablePrefetchRootHTML;
    _Bool _disableSwipeDownToDismiss;
    _Bool _delayLoadUntilWebviewScheduledToTakeOver;
    _Bool _resetOnDismiss;
    NSURL *_url;
    NSString *_hitURLRegex;
    double _resetOnDismissMaxProgress;
}

@property(readonly, nonatomic) double resetOnDismissMaxProgress; // @synthesize resetOnDismissMaxProgress=_resetOnDismissMaxProgress;
@property(readonly, nonatomic) _Bool resetOnDismiss; // @synthesize resetOnDismiss=_resetOnDismiss;
@property(readonly, nonatomic) _Bool delayLoadUntilWebviewScheduledToTakeOver; // @synthesize delayLoadUntilWebviewScheduledToTakeOver=_delayLoadUntilWebviewScheduledToTakeOver;
@property(readonly, nonatomic) _Bool disableSwipeDownToDismiss; // @synthesize disableSwipeDownToDismiss=_disableSwipeDownToDismiss;
@property(readonly, nonatomic) _Bool enablePrefetchRootHTML; // @synthesize enablePrefetchRootHTML=_enablePrefetchRootHTML;
@property(readonly, nonatomic) _Bool enablePreloading; // @synthesize enablePreloading=_enablePreloading;
@property(readonly, nonatomic) _Bool enableHeaderActionButton; // @synthesize enableHeaderActionButton=_enableHeaderActionButton;
@property(readonly, nonatomic) _Bool sharable; // @synthesize sharable=_sharable;
@property(readonly, copy, nonatomic) NSString *hitURLRegex; // @synthesize hitURLRegex=_hitURLRegex;
@property(readonly, nonatomic) _Bool reportJavaScriptPerformance; // @synthesize reportJavaScriptPerformance=_reportJavaScriptPerformance;
@property(readonly, nonatomic) _Bool enableAutoFill; // @synthesize enableAutoFill=_enableAutoFill;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUrl:(id)arg1 enableAutoFill:(_Bool)arg2 reportJavaScriptPerformance:(_Bool)arg3 hitURLRegex:(id)arg4 sharable:(_Bool)arg5 enableHeaderActionButton:(_Bool)arg6 enablePreloading:(_Bool)arg7 enablePrefetchRootHTML:(_Bool)arg8 disableSwipeDownToDismiss:(_Bool)arg9 delayLoadUntilWebviewScheduledToTakeOver:(_Bool)arg10 resetOnDismiss:(_Bool)arg11 resetOnDismissMaxProgress:(double)arg12;

@end

