//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSDate, NSString, NSTimer;

@interface MGLLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _hostAppHasBackgroundCapability;
    _Bool _updatingLocation;
    id <MGLLocationManagerDelegate> _delegate;
    CLLocationManager *_standardLocationManager;
    NSDate *_backgroundLocationServiceTimeoutAllowedDate;
    NSTimer *_backgroundLocationServiceTimeoutTimer;
}

@property(retain, nonatomic) NSTimer *backgroundLocationServiceTimeoutTimer; // @synthesize backgroundLocationServiceTimeoutTimer=_backgroundLocationServiceTimeoutTimer;
@property(retain, nonatomic) NSDate *backgroundLocationServiceTimeoutAllowedDate; // @synthesize backgroundLocationServiceTimeoutAllowedDate=_backgroundLocationServiceTimeoutAllowedDate;
@property(nonatomic, getter=isUpdatingLocation) _Bool updatingLocation; // @synthesize updatingLocation=_updatingLocation;
@property(nonatomic) _Bool hostAppHasBackgroundCapability; // @synthesize hostAppHasBackgroundCapability=_hostAppHasBackgroundCapability;
@property(retain, nonatomic) CLLocationManager *standardLocationManager; // @synthesize standardLocationManager=_standardLocationManager;
@property(nonatomic) __weak id <MGLLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)establishRegionMonitoringForLocation:(id)arg1;
- (void)startBackgroundTimeoutTimer;
- (void)timeoutAllowedCheck;
- (void)startLocationServices;
- (void)configurePassiveStandardLocationManager;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

