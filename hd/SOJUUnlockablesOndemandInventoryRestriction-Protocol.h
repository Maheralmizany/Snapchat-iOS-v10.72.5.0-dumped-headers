//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString, SOJUUnlockablesOndemandGeofence, SOJUUnlockablesOndemandRestriction, SOJUUnlockablesOndemandSchedule;

@protocol SOJUUnlockablesOndemandInventoryRestriction <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandRestriction *restriction;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandGeofence *geofence;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSchedule *schedule;
@property(readonly, copy, nonatomic) NSString *idValue;
@end

