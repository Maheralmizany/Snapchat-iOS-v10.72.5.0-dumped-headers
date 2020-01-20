//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLocationListener.h"

@class NSMutableArray, NSNotificationCenter, NSString, SCLazy, User;

@interface SCGeolocationLogger : NSObject <SCLocationListener>
{
    id <SCLocationProvider> _locationProvider;
    SCLazy *_lazyLocationPreferences;
    NSNotificationCenter *_notificationCenter;
    User *_user;
    id <SCPerforming> _performer;
    NSMutableArray *_locationStream;
}

- (void).cxx_destruct;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)_onApplicationDidEnterBackground:(id)arg1;
- (void)_flushEvents;
- (id)initWithLocationProvider:(id)arg1 lazyLocationPreferences:(id)arg2 notificationCenter:(id)arg3 user:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

