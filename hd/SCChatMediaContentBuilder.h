//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSNumber, NSString, SCBoltContentObject, SOJUMediaUrl, SOJUSnapMetadata;

@interface SCChatMediaContentBuilder : NSObject
{
    NSString *_mediaId;
    NSString *_key;
    NSString *_iv;
    NSString *_mediaUrl;
    SOJUMediaUrl *_directUploadMediaUrl;
    SOJUMediaUrl *_directDownloadMediaUrl;
    NSString *_broadcastMediaUrl;
    NSString *_broadcastActionText;
    NSString *_broadcastSecondaryText;
    NSString *_broadcastUrl;
    NSString *_creatorAttribution;
    _Bool _isBroadcast;
    _Bool _hidesBroadcastTimer;
    long long _mediaType;
    long long _mediaLoadState;
    NSNumber *_width;
    NSNumber *_height;
    _Bool _isZipped;
    _Bool _isCustomSticker;
    NSNumber *_duration;
    _Bool _isInfiniteDuration;
    NSArray *_snapAttachments;
    NSString *_venueId;
    NSString *_sourceId;
    SOJUSnapMetadata *_snapMetadata;
    long long _mediaUploadState;
    SCBoltContentObject *_contentObject;
    NSData *_miniThumbnailData;
}

+ (id)withChatMediaContent:(id)arg1;
+ (id)withReplyMedia:(id)arg1;
- (void).cxx_destruct;
- (id)setMiniThumbnailData:(id)arg1;
- (id)setContentObject:(id)arg1;
- (id)setMediaUploadState:(long long)arg1;
- (id)setSnapMetadata:(id)arg1;
- (id)setSourceId:(id)arg1;
- (id)setVenueId:(id)arg1;
- (id)setSnapAttachments:(id)arg1;
- (id)setIsInfiniteDuration:(_Bool)arg1;
- (id)setDuration:(id)arg1;
- (id)setIsCustomSticker:(_Bool)arg1;
- (id)setIsZipped:(_Bool)arg1;
- (id)setHeight:(id)arg1;
- (id)setWidth:(id)arg1;
- (id)setMediaLoadState:(long long)arg1;
- (id)setMediaType:(long long)arg1;
- (id)setHidesBroadcastTimer:(_Bool)arg1;
- (id)setIsBroadcast:(_Bool)arg1;
- (id)setCreatorAttribution:(id)arg1;
- (id)setBroadcastUrl:(id)arg1;
- (id)setBroadcastSecondaryText:(id)arg1;
- (id)setBroadcastActionText:(id)arg1;
- (id)setBroadcastMediaUrl:(id)arg1;
- (id)setDirectDownloadMediaUrl:(id)arg1;
- (id)setDirectUploadMediaUrl:(id)arg1;
- (id)setMediaUrl:(id)arg1;
- (id)setIv:(id)arg1;
- (id)setKey:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)build;

@end

