//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFKVONSObject.h"

@interface SPApplicationStateHolder : AIFKVONSObject
{
    long long _applicationState;
}

@property long long applicationState; // @synthesize applicationState=_applicationState;
- (void)updateAppState;
- (void)handleDidBecomeActiveNotification;
- (void)handleWillEnterForegroundNotification;
- (void)handleDidEnterBackgroundNotification;
- (void)handleWillResignActiveNotification;
- (id)init;

@end
