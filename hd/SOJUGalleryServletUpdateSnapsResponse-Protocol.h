//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUGalleryServletBaseResponse.h"

@class NSArray, NSNumber, NSString, SOJUGalleryServletQuota;

@protocol SOJUGalleryServletUpdateSnapsResponse <NSObject, NSCoding, NSCopying, SOJUGalleryServletBaseResponse>
@property(readonly, copy, nonatomic) NSArray *snaps;
@property(readonly, copy, nonatomic) NSNumber *totalEntryCount;
@property(readonly, copy, nonatomic) SOJUGalleryServletQuota *quota;
@property(readonly, copy, nonatomic) NSString *debugInfo;
@property(readonly, copy, nonatomic) NSNumber *backoffTime;
@property(readonly, copy, nonatomic) NSString *userString;
@property(readonly, copy, nonatomic) NSNumber *serviceStatusCode;
@end

