//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUAdDeviceDeviceInfo;

@protocol SOJUAdUnlockableViewImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *unlockablesSnapInfo;
@property(readonly, copy, nonatomic) NSString *snappableInviteAction;
@property(readonly, copy, nonatomic) SOJUAdDeviceDeviceInfo *deviceInfo;
@property(readonly, copy, nonatomic) NSString *snapViewType;
@property(readonly, copy, nonatomic) NSNumber *isAudioOn;
@property(readonly, copy, nonatomic) NSString *encGeoData;
@property(readonly, copy, nonatomic) NSNumber *mediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *timeViewedSeconds;
@end

