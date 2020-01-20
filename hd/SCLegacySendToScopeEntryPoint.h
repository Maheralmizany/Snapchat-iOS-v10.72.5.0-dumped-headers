//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCCustomStoriesServices, SCGroupServices, SCLegacySendToScope, SCLegacySendToWorkflow, SCLegacySnapchatterServices, SCMatchaSendToWorkflow, SCOptionalScopeExposer, SCSnapchatterServices;

@interface SCLegacySendToScopeEntryPoint : SCEntryPoint
{
    SCLegacySendToWorkflow *_legacySendToWorkflow;
    SCMatchaSendToWorkflow *_matchaSendToWorkflow;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCGroupServices *_groupServices;
    SCLegacySendToScope *_legacySendToScope;
    SCSnapchatterServices *_snapchatterServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCCustomStoriesServices *_customStoriesServices;
    SCOptionalScopeExposer *_sendToScopeExposer;
}

@property(nonatomic) __weak SCOptionalScopeExposer *sendToScopeExposer; // @synthesize sendToScopeExposer=_sendToScopeExposer;
@property(nonatomic) __weak SCCustomStoriesServices *customStoriesServices; // @synthesize customStoriesServices=_customStoriesServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCLegacySendToScope *legacySendToScope; // @synthesize legacySendToScope=_legacySendToScope;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end

