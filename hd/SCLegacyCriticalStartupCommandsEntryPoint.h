//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCScopeExposer, SCStartupCompletionServices, SCSystemScope;

@interface SCLegacyCriticalStartupCommandsEntryPoint : SCEntryPoint
{
    SCSystemScope *_systemScope;
    SCStartupCompletionServices *_startupCompletionServices;
    SCScopeExposer *_nonCriticalStartupCommandsStartupCompleteScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *nonCriticalStartupCommandsStartupCompleteScopeExposer; // @synthesize nonCriticalStartupCommandsStartupCompleteScopeExposer=_nonCriticalStartupCommandsStartupCompleteScopeExposer;
@property(nonatomic) __weak SCStartupCompletionServices *startupCompletionServices; // @synthesize startupCompletionServices=_startupCompletionServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)_executeCommands;
- (void)_exposeNonCriticalStartupCommandsStartupCompleteScope;
- (void)_executeCommand:(id)arg1;
- (void)begin;

@end

