//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCApplicationState : NSObject
{
    _Bool _protectedDataAvailable;
    long long _applicationState;
    long long _nextApplicationState;
}

+ (id)shared;
@property(readonly) long long nextApplicationState; // @synthesize nextApplicationState=_nextApplicationState;
@property(readonly) long long applicationState; // @synthesize applicationState=_applicationState;
@property(readonly) _Bool protectedDataAvailable; // @synthesize protectedDataAvailable=_protectedDataAvailable;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appWillResignActive;
- (void)appDidBecomeActive;
- (void)appDidFinishLaunching;
- (void)_protectedDataWillBecomeUnavailable;
- (void)_protectedDataDidBecomeAvailable;
- (id)init;

@end
