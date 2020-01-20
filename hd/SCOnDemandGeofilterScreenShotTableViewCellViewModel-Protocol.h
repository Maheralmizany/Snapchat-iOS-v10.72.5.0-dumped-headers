//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString, NSURL, SOJUUnlockablesOndemandGeofence, UIColor, UIImage;

@protocol SCOnDemandGeofilterScreenShotTableViewCellViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandGeofence *geofence;
@property(readonly, nonatomic) double cellWidth;
@property(readonly, nonatomic) double cellHeight;
@property(readonly, copy, nonatomic) UIColor *statusColor;
@property(readonly, copy, nonatomic) NSString *statusContent;
@property(readonly, copy, nonatomic) UIImage *thumbNail;
@property(readonly, copy, nonatomic) NSURL *thumbNailURL;
@property(readonly, nonatomic) _Bool enableActivityIndicator;
@end
