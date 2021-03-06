//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDate, NSString;

@protocol SCGalleryProfile <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *syncToken;
@property(readonly, nonatomic) int snapTotalQuota;
@property(readonly, copy, nonatomic) NSDate *lastFullSyncTime;
@property(readonly, copy, nonatomic) NSDate *lastFeaturedStorySyncTime;
@property(readonly, copy, nonatomic) NSDate *lastBackupNotificationTime;
@property(readonly, copy, nonatomic) NSString *objectID;
@end

