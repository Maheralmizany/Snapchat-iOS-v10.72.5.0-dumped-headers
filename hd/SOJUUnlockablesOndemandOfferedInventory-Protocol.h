//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class SOJUUnlockablesOndemandAssetRequirements, SOJUUnlockablesOndemandFenceRequirements, SOJUUnlockablesOndemandSchedule, SOJUUnlockablesOndemandSizeRequirements;

@protocol SOJUUnlockablesOndemandOfferedInventory <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandAssetRequirements *assetRequirements;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSizeRequirements *sizeRequirements;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandFenceRequirements *fenceRequirements;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandSchedule *schedule;
@end
