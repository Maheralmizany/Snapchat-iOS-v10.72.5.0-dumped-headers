//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAppUserLifecycleEventObserver.h"
#import "SCDataCoordinatorListener.h"

@class NSString, SCLazy, SCPreferences;

@interface SCGroupsAppUserLifecycleObserver : NSObject <SCDataCoordinatorListener, SCAppUserLifecycleEventObserver>
{
    SCLazy *_groupsDataRemoteFetcher;
    id <SCGroupManager> _groupManager;
    SCPreferences *_userPreferences;
}

- (void).cxx_destruct;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_remoteFetchGroups;
- (void)onUserResumed:(_Bool)arg1 didLaunchWithDataUnavailable:(_Bool)arg2;
- (void)onUserRegistered;
- (void)onAppWillTerminate;
- (void)onAppWillResignActive;
- (void)onAppWillEnterForeground;
- (void)onAppDidFinishLaunching;
- (void)onAppDidEnterBackground;
- (void)onAppDidBecomeActive;
- (void)onUserLoggedIn;
- (id)initWithGroupsDataRemoteFetcher:(id)arg1 groupManager:(id)arg2 userPreferences:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

