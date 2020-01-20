//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCScopeLifecycleMonitor.h"

@interface SCLoggingScopeLifecycleMonitor : NSObject <SCScopeLifecycleMonitor>
{
    CDUnknownFunctionPointerType _infoLogger;
}

- (void)plugInScope:(id)arg1 loadedPlugInsInLifecycle:(id)arg2;
- (void)plugInScope:(id)arg1 loadingPlugInsInLifecycle:(id)arg2;
- (void)plugInScope:(id)arg1 willBeRemovedFromLifecycle:(id)arg2;
- (void)plugInScope:(id)arg1 willBeExposedFromLifecycle:(id)arg2;
- (void)scope:(id)arg1 willBeRemovedFromLifecycle:(id)arg2;
- (void)scope:(id)arg1 willBeExposedFromLifecycle:(id)arg2;
- (void)services:(id)arg1 willBeExposedInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 endedInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 endingInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 beganInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 beginningInLifecycle:(id)arg2;
- (void)lifecycleEnded:(id)arg1;
- (void)lifecycleEnding:(id)arg1;
- (void)lifecycleBegan:(id)arg1;
- (void)lifecycleBeginning:(id)arg1;
- (id)initWithInfoLogger:(CDUnknownFunctionPointerType)arg1;

@end

