//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@protocol SOJUGalleryServletSnapResult <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *thumbnailRedirectUri;
@property(readonly, copy, nonatomic) NSString *overlayImageRedirectUri;
@property(readonly, copy, nonatomic) NSString *mediaRedirectUri;
@property(readonly, copy, nonatomic) NSDictionary *thumbnailUploadHeaders;
@property(readonly, copy, nonatomic) NSDictionary *overlayUploadHeaders;
@property(readonly, copy, nonatomic) NSDictionary *mediaUploadHeaders;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl;
@property(readonly, copy, nonatomic) NSString *overlayUrl;
@property(readonly, copy, nonatomic) NSString *mediaUrl;
@property(readonly, copy, nonatomic) NSNumber *mediaUploaded;
@property(readonly, copy, nonatomic) NSString *debugInfo;
@property(readonly, copy, nonatomic) NSNumber *statusCode;
@property(readonly, copy, nonatomic) NSString *snapId;
@end
