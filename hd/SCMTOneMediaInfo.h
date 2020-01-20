//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSString;

@interface SCMTOneMediaInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long bitrateKpbs; // @dynamic bitrateKpbs;
@property(copy, nonatomic) NSString *compositeURL; // @dynamic compositeURL;
@property(copy, nonatomic) NSString *encryptionIv; // @dynamic encryptionIv;
@property(copy, nonatomic) NSString *encryptionKey; // @dynamic encryptionKey;
@property(copy, nonatomic) NSString *mediaM3U8URL; // @dynamic mediaM3U8URL;
@property(nonatomic) long long mediaMetadataSize; // @dynamic mediaMetadataSize;
@property(retain, nonatomic) GPBInt64Array *mediaSegmentSizeArray; // @dynamic mediaSegmentSizeArray;
@property(readonly, nonatomic) unsigned long long mediaSegmentSizeArray_Count; // @dynamic mediaSegmentSizeArray_Count;
@property(nonatomic) long long mediaSize; // @dynamic mediaSize;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(copy, nonatomic) NSString *overlayURL; // @dynamic overlayURL;
@property(copy, nonatomic) NSString *prefixURL; // @dynamic prefixURL;
@property(copy, nonatomic) NSString *previewURL; // @dynamic previewURL;

@end
