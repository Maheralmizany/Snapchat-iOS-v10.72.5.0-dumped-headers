//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCMTThumbnailInfo;

@interface SCMTThumbnail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) int displayType; // @dynamic displayType;
@property(nonatomic) _Bool hasStreamingThumbnailInfo; // @dynamic hasStreamingThumbnailInfo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *iv; // @dynamic iv;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *publicFilename; // @dynamic publicFilename;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(retain, nonatomic) SCMTThumbnailInfo *streamingThumbnailInfo; // @dynamic streamingThumbnailInfo;
@property(copy, nonatomic) NSString *thumbnailData; // @dynamic thumbnailData;

@end
