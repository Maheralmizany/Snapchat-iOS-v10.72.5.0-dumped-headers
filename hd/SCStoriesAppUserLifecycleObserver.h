//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAppUserLifecycleEventObserver.h"

@class NSString, SCLazy;

@interface SCStoriesAppUserLifecycleObserver : NSObject <SCAppUserLifecycleEventObserver>
{
    SCLazy *_storiesFetcher;
    _Bool _needsFullFetch;
}

- (void).cxx_destruct;
- (void)onAppWillTerminate;
- (void)onAppWillResignActive;
- (void)onAppDidFinishLaunching;
- (void)onAppDidEnterBackground;
- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (void)onUserResumed:(_Bool)arg1 didLaunchWithDataUnavailable:(_Bool)arg2;
- (void)onUserRegistered;
- (void)onUserLoggedIn;
- (id)initWithStoriesFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

