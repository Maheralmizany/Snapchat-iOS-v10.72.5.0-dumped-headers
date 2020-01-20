//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, UIEvent;

@protocol SCAppLifeCycleManager <NSObject>
- (void)unmarkStartComplete;
- (void)markForegroundLaunchStarted;
- (void)markEndOfBackgroundLaunch:(_Bool)arg1;
- (void)markStartComplete;
- (void)markMainViewControllerLoaded:(id <SCIdleMonitorScrollController>)arg1;
- (void)receiveTouchEvent:(UIEvent *)arg1;
- (void)waitUntilStartCompleteOrBackgroundLaunchIdleForTag:(const char *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (void)waitUntilStartCompleteButBlockSwipeForTag:(const char *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (void)waitUntilStartCompleteForTag:(const char *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (void)waitUntilIdleForTag:(const char *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
@end

