//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCUserJobProviderScope, SCUserJobSchedulerServices, SCUserSessionScope;

@interface SCBlizzardBackgroundPrefetchJobProviderEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserJobProviderScope *_userJobProviderScope;
    SCUserJobSchedulerServices *_userJobSchedulerService;
}

@property(nonatomic) __weak SCUserJobSchedulerServices *userJobSchedulerService; // @synthesize userJobSchedulerService=_userJobSchedulerService;
@property(nonatomic) __weak SCUserJobProviderScope *userJobProviderScope; // @synthesize userJobProviderScope=_userJobProviderScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (_Bool)_isBlizzardBGPrefetchEnabled;
- (void)_submitJob;
- (id)_createJobProcessor;
- (void)begin;

@end

