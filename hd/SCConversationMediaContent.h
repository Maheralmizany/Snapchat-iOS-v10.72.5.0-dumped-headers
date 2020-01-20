//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCConversationBroadcastSnapInfo, SCConversationMediaDimensionInfo, SCConversationMediaDirectDownloadUrl, SCConversationMediaEncryptionInfo, SCConversationSnapMetadata;

@interface SCConversationMediaContent : NSObject <NSCopying>
{
    BOOL _type;
    _Bool _isZipped;
    _Bool _isCustomSticker;
    NSString *_mediaId;
    SCConversationMediaEncryptionInfo *_encryptionInfo;
    NSString *_mediaUrl;
    SCConversationMediaDirectDownloadUrl *_directDownloadMediaUrl;
    SCConversationBroadcastSnapInfo *_broadcastSnapInfo;
    SCConversationMediaDimensionInfo *_dimensionInfo;
    double _duration;
    NSString *_storyReplySourceId;
    SCConversationSnapMetadata *_snapMetadata;
}

@property(readonly, copy, nonatomic) SCConversationSnapMetadata *snapMetadata; // @synthesize snapMetadata=_snapMetadata;
@property(readonly, copy, nonatomic) NSString *storyReplySourceId; // @synthesize storyReplySourceId=_storyReplySourceId;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool isCustomSticker; // @synthesize isCustomSticker=_isCustomSticker;
@property(readonly, nonatomic) _Bool isZipped; // @synthesize isZipped=_isZipped;
@property(readonly, copy, nonatomic) SCConversationMediaDimensionInfo *dimensionInfo; // @synthesize dimensionInfo=_dimensionInfo;
@property(readonly, nonatomic) BOOL type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) SCConversationBroadcastSnapInfo *broadcastSnapInfo; // @synthesize broadcastSnapInfo=_broadcastSnapInfo;
@property(readonly, copy, nonatomic) SCConversationMediaDirectDownloadUrl *directDownloadMediaUrl; // @synthesize directDownloadMediaUrl=_directDownloadMediaUrl;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(readonly, copy, nonatomic) SCConversationMediaEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaId:(id)arg1 encryptionInfo:(id)arg2 mediaUrl:(id)arg3 directDownloadMediaUrl:(id)arg4 broadcastSnapInfo:(id)arg5 type:(BOOL)arg6 dimensionInfo:(id)arg7 isZipped:(_Bool)arg8 isCustomSticker:(_Bool)arg9 duration:(double)arg10 storyReplySourceId:(id)arg11 snapMetadata:(id)arg12;

@end

