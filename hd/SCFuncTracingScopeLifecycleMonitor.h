//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCScopeLifecycleMonitor.h"

@class NSCountedSet, NSMapTable;

@interface SCFuncTracingScopeLifecycleMonitor : NSObject <SCScopeLifecycleMonitor>
{
    id <SCScopeLifecycleFuncTracer> _funcTracer;
    unsigned int _baseUID;
    NSMapTable *_lifecycleToTraceEventUID;
    NSMapTable *_lifecycleToSubLifecycleUIDs;
    NSCountedSet *_inUseUIDS;
}

- (void).cxx_destruct;
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
- (void)lifecycleEnding:(id)arg1;
- (void)lifecycleBegan:(id)arg1;
- (id)_traceMessageForLifecycle:(id)arg1;
- (void)lifecycleEnded:(id)arg1;
- (void)lifecycleBeginning:(id)arg1;
- (id)initWithFuncTracer:(id)arg1 baseUID:(unsigned int)arg2;

@end

