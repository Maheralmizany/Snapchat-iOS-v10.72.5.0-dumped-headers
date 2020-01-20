//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSString, SCConversationStickerCapabilities, SCConversationStickerEncryptionInfo;

@interface SCConversationSticker : NSObject <NSCopying>
{
    BOOL _stickerType;
    BOOL _customStickerType;
    _Bool _isAnimated;
    NSString *_packId;
    NSString *_stickerId;
    SCConversationStickerEncryptionInfo *_encryptionInfo;
    SCConversationStickerCapabilities *_capabilities;
    double _creationTimeInEpochSecs;
    double _lastUsedTimeInEpochSecs;
    NSString *_facecutOriginSnapId;
    NSString *_externalSrcUrl;
    long long _uniqueId;
    long long _unlockableId;
    NSData *_imageData;
}

@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(readonly, nonatomic) long long unlockableId; // @synthesize unlockableId=_unlockableId;
@property(readonly, nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, copy, nonatomic) NSString *externalSrcUrl; // @synthesize externalSrcUrl=_externalSrcUrl;
@property(readonly, copy, nonatomic) NSString *facecutOriginSnapId; // @synthesize facecutOriginSnapId=_facecutOriginSnapId;
@property(readonly, nonatomic) double lastUsedTimeInEpochSecs; // @synthesize lastUsedTimeInEpochSecs=_lastUsedTimeInEpochSecs;
@property(readonly, nonatomic) double creationTimeInEpochSecs; // @synthesize creationTimeInEpochSecs=_creationTimeInEpochSecs;
@property(readonly, copy, nonatomic) SCConversationStickerCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, copy, nonatomic) SCConversationStickerEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, nonatomic) BOOL customStickerType; // @synthesize customStickerType=_customStickerType;
@property(readonly, nonatomic) BOOL stickerType; // @synthesize stickerType=_stickerType;
@property(readonly, copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
@property(readonly, copy, nonatomic) NSString *packId; // @synthesize packId=_packId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPackId:(id)arg1 stickerId:(id)arg2 stickerType:(BOOL)arg3 customStickerType:(BOOL)arg4 encryptionInfo:(id)arg5 capabilities:(id)arg6 creationTimeInEpochSecs:(double)arg7 lastUsedTimeInEpochSecs:(double)arg8 facecutOriginSnapId:(id)arg9 externalSrcUrl:(id)arg10 uniqueId:(long long)arg11 unlockableId:(long long)arg12 isAnimated:(_Bool)arg13 imageData:(id)arg14;

@end

