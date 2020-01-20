//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAsyncCommand.h"

@class SCAppStartupState;

@interface SCStartupCommand : SCAsyncCommand
{
    struct NSString *_parentCommandIdentifier;
    _Bool _mustBeMainThread;
    _Bool _executed;
    SCAppStartupState *_appStartupState;
    unsigned long long _numberOfDelayedCommands;
}

@property(readonly, nonatomic) unsigned long long numberOfDelayedCommands; // @synthesize numberOfDelayedCommands=_numberOfDelayedCommands;
@property(readonly, nonatomic) SCAppStartupState *appStartupState; // @synthesize appStartupState=_appStartupState;
@property(readonly, nonatomic) _Bool executed; // @synthesize executed=_executed;
@property(readonly, nonatomic) _Bool mustBeMainThread; // @synthesize mustBeMainThread=_mustBeMainThread;
- (void).cxx_destruct;
- (void)setParentCommandIdentifier:(struct NSString *)arg1;
- (struct NSString *)taskId;
- (void)markCommandEnd;
- (void)markCommandStart;
- (void)didTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)execute;
- (id)initMainThreadCommandWithAppStartupState:(id)arg1;
- (id)initWithAppStartupState:(id)arg1;

@end
