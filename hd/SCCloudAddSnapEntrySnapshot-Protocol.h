//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDictionary, NSString, SCCloudSyncTriggerUserContext;

@protocol SCCloudAddSnapEntrySnapshot <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SCCloudSyncTriggerUserContext *userContext;
@property(readonly, copy, nonatomic) NSDictionary *dataVaultEncryption;
@property(readonly, copy, nonatomic) NSString *duplicatedFromSnapId;
@property(readonly, copy, nonatomic) id <SCGallerySnapMiniThumbnail> miniThumbnailPlaceholder;
@property(readonly, copy, nonatomic) id <SCGallerySnapDetail> detailPlaceholder;
@property(readonly, copy, nonatomic) id <SCGallerySnap> snapPlaceholder;
@property(readonly, copy, nonatomic) id <SCGalleryEntry> entryPlaceholder;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile;
@end
