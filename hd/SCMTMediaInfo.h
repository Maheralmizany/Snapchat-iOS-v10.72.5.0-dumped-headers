//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTMediaInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(copy, nonatomic) NSString *mediaIv; // @dynamic mediaIv;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(copy, nonatomic) NSString *thumbnailIv; // @dynamic thumbnailIv;
@property(nonatomic) _Bool zipped; // @dynamic zipped;

@end

