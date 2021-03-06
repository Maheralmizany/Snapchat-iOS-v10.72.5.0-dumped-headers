//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUGeofence, SOJUStickerPackContextualMetadata;

@protocol SOJUStickerPack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *expirationTtlInSec;
@property(readonly, copy, nonatomic) NSString *metadataUrl;
@property(readonly, copy, nonatomic) NSNumber *isExpandable;
@property(readonly, copy, nonatomic) NSString *unlockableId;
@property(readonly, copy, nonatomic) SOJUStickerPackContextualMetadata *contextualPackMetadata;
@property(readonly, copy, nonatomic) NSNumber *unlockExpirationTimeInSec;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *unlockablePreviewImgUrl;
@property(readonly, copy, nonatomic) SOJUGeofence *geofence;
@property(readonly, copy, nonatomic) NSString *superCategory;
@property(readonly, copy, nonatomic) NSArray *target;
@property(readonly, copy, nonatomic) NSArray *capabilities;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *active;
@property(readonly, copy, nonatomic) NSNumber *version;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, copy, nonatomic) NSNumber *iconVersion;
@property(readonly, copy, nonatomic) NSString *iconUrl;
@property(readonly, copy, nonatomic) NSString *categoryId;
@property(readonly, copy, nonatomic) NSString *packId;
@end

