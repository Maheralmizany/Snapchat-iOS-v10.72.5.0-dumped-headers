//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCVideoTargetTrajectory, SCVideoTargetTrajectoryManager;

@protocol SCVideoTrackedView <NSObject>
@property(readonly, nonatomic) SCVideoTargetTrajectoryManager *trajectoryManager;
- (void)disableTracking;
- (void)enableTrackingWithManager:(SCVideoTargetTrajectoryManager *)arg1;
- (SCVideoTargetTrajectory *)targetTrajectory;
- (_Bool)isTracking;
@end

