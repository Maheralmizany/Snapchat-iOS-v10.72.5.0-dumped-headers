//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocationManager, NSString, SCLocationManager;

@protocol SCLocationManagerOperationalListener <NSObject>

@optional
- (void)locationManager:(SCLocationManager *)arg1 wasGrantedAuthorization:(_Bool)arg2;
- (void)locationManager:(SCLocationManager *)arg1 observerStoppedUpdating:(NSString *)arg2;
- (void)locationManager:(SCLocationManager *)arg1 observerStartedUpdating:(NSString *)arg2;
- (void)locationManager:(SCLocationManager *)arg1 stoppedCLManager:(CLLocationManager *)arg2;
- (void)locationManager:(SCLocationManager *)arg1 startedCLManager:(CLLocationManager *)arg2;
@end

