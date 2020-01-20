//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, CLLocation, NSArray, SCLocationListenerAnnouncer;

@protocol SCLocationProvider <NSObject>
- (SCLocationListenerAnnouncer *)locationAnnouncer;
- (id <SCObserving>)requestActiveLocationUpdatesWithRequest:(id <SCLocationRequest>)arg1;
- (_Bool)hasRecentAuthorizationStatus;
- (_Bool)hasAuthorizationStatus;
- (_Bool)lastAuthorized;
- (int)lastAuthorizationStatus;
- (NSArray *)beacons;
- (CLHeading *)heading;
- (CLLocation *)location;
@end
