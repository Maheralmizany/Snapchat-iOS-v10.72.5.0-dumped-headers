//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface SCPBGalleryServletSnapResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *debugInfo; // @dynamic debugInfo;
@property(copy, nonatomic) NSString *mediaRedirectUri; // @dynamic mediaRedirectUri;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(retain, nonatomic) NSMutableDictionary *mediaUploadHeaders; // @dynamic mediaUploadHeaders;
@property(readonly, nonatomic) unsigned long long mediaUploadHeaders_Count; // @dynamic mediaUploadHeaders_Count;
@property(nonatomic) _Bool mediaUploaded; // @dynamic mediaUploaded;
@property(copy, nonatomic) NSString *overlayImageRedirectUri; // @dynamic overlayImageRedirectUri;
@property(copy, nonatomic) NSString *overlayURL; // @dynamic overlayURL;
@property(retain, nonatomic) NSMutableDictionary *overlayUploadHeaders; // @dynamic overlayUploadHeaders;
@property(readonly, nonatomic) unsigned long long overlayUploadHeaders_Count; // @dynamic overlayUploadHeaders_Count;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(nonatomic) int statusCode; // @dynamic statusCode;
@property(copy, nonatomic) NSString *thumbnailRedirectUri; // @dynamic thumbnailRedirectUri;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;
@property(retain, nonatomic) NSMutableDictionary *thumbnailUploadHeaders; // @dynamic thumbnailUploadHeaders;
@property(readonly, nonatomic) unsigned long long thumbnailUploadHeaders_Count; // @dynamic thumbnailUploadHeaders_Count;

@end

