//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SCGalleryProfileBuilder : NSObject
{
    NSString *_objectID;
    NSDate *_lastBackupNotificationTime;
    NSDate *_lastFeaturedStorySyncTime;
    NSDate *_lastFullSyncTime;
    int _snapTotalQuota;
    NSString *_syncToken;
    NSString *_userId;
}

+ (id)withGalleryProfile:(id)arg1;
- (void).cxx_destruct;
- (id)setUserId:(id)arg1;
- (id)setSyncToken:(id)arg1;
- (id)setSnapTotalQuota:(int)arg1;
- (id)setLastFullSyncTime:(id)arg1;
- (id)setLastFeaturedStorySyncTime:(id)arg1;
- (id)setLastBackupNotificationTime:(id)arg1;
- (id)setObjectID:(id)arg1;
- (id)build;

@end

