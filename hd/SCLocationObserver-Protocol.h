//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, CLLocation, NSArray, NSError, NSObject<OS_dispatch_queue>, NSString;

@protocol SCLocationObserver <NSObject>
- (NSString *)locationObserverIdentifier;
- (NSObject<OS_dispatch_queue> *)locationObserverDispatchQueue;
- (_Bool)locationObserverWantsActiveLocationMonitoring;

@optional
- (void)onLocationMonitoredBeaconRegionsUpdated;
- (void)onLocationAuthorizationStatusChange:(int)arg1;
- (void)onLocationError:(NSError *)arg1;
- (void)onLocationHeadingChange:(CLHeading *)arg1;
- (void)onLocationUpdate:(CLLocation *)arg1;
- (NSArray *)locationObserverWantsToMonitorBeaconRegions;
- (_Bool)locationObserverWantsBackgroundLocationMonitoring;
- (_Bool)locationObserverWantsActiveHeadingMonitoring;
- (double)locationObserverDesiredAccuracy;
@end

