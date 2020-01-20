//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSString;

@interface SCSSMStoryThumbnail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool isBrandSafe; // @dynamic isBrandSafe;
@property(copy, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(nonatomic) float score; // @dynamic score;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;
@property(copy, nonatomic) NSString *thumbnailDominantColor; // @dynamic thumbnailDominantColor;
@property(copy, nonatomic) NSString *thumbnailIv; // @dynamic thumbnailIv;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;
@property(retain, nonatomic) GPBEnumArray *thumbnailVariantsArray; // @dynamic thumbnailVariantsArray;
@property(readonly, nonatomic) unsigned long long thumbnailVariantsArray_Count; // @dynamic thumbnailVariantsArray_Count;
@property(copy, nonatomic) NSString *videoFirstFrameThumbnailURL; // @dynamic videoFirstFrameThumbnailURL;
@property(copy, nonatomic) NSString *videoThumbnailURL; // @dynamic videoThumbnailURL;

@end

