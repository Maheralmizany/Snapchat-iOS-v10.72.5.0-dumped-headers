//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTOneThumbnailInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *encryptionIv; // @dynamic encryptionIv;
@property(copy, nonatomic) NSString *encryptionKey; // @dynamic encryptionKey;
@property(nonatomic) int thumbnailType; // @dynamic thumbnailType;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;

@end

