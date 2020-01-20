//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUKhaleesiShare, SOJUMedia, SOJUMediaSave, SOJUMessageParcel, SOJUNycShare, SOJUSearchShareStory, SOJUSearchShareStorySnap, SOJUSnapMetadata, SOJUSnapchatter, SOJUSticker, SOJUStoryShare;

@interface SOJUMessageBodyBuilder : NSObject
{
    SOJUMedia *_media;
    NSArray *_medias;
    SOJUSticker *_sticker;
    SOJUSnapchatter *_snapchatter;
    NSString *_type;
    NSNumber *_typeVersion;
    NSString *_text;
    NSArray *_attributes;
    NSArray *_mediaCardAttributes;
    NSString *_storyTitle;
    SOJUStoryShare *_storyShare;
    NSNumber *_obfuscation;
    SOJUSnapMetadata *_snapMetadata;
    SOJUKhaleesiShare *_khaleesiShare;
    SOJUNycShare *_nycShare;
    SOJUSearchShareStorySnap *_searchShareStorySnap;
    SOJUSearchShareStory *_searchShareStory;
    SOJUMediaSave *_mediaSave;
    NSArray *_replyMedias;
    NSArray *_messagePallet;
    NSNumber *_sendStartTimestamp;
    NSNumber *_isScreenRecording;
    SOJUMessageParcel *_messageParcel;
    NSString *_screenCaptureSource;
    NSString *_speedwayStoryV2Source;
}

+ (id)withJUMessageBody:(id)arg1;
- (void).cxx_destruct;
- (id)setSpeedwayStoryV2Source:(id)arg1;
- (id)setScreenCaptureSource:(id)arg1;
- (id)setMessageParcel:(id)arg1;
- (id)setIsScreenRecording:(id)arg1;
- (id)setSendStartTimestamp:(id)arg1;
- (id)setMessagePallet:(id)arg1;
- (id)setReplyMedias:(id)arg1;
- (id)setMediaSave:(id)arg1;
- (id)setSearchShareStory:(id)arg1;
- (id)setSearchShareStorySnap:(id)arg1;
- (id)setNycShare:(id)arg1;
- (id)setKhaleesiShare:(id)arg1;
- (id)setSnapMetadata:(id)arg1;
- (id)setObfuscation:(id)arg1;
- (id)setStoryShare:(id)arg1;
- (id)setStoryTitle:(id)arg1;
- (id)setMediaCardAttributes:(id)arg1;
- (id)setAttributes:(id)arg1;
- (id)setText:(id)arg1;
- (id)setTypeVersion:(id)arg1;
- (id)setType:(id)arg1;
- (id)setSnapchatter:(id)arg1;
- (id)setSticker:(id)arg1;
- (id)setMedias:(id)arg1;
- (id)setMedia:(id)arg1;
- (id)build;
- (id)setSpeedwayStoryV2SourceEnum:(long long)arg1;
- (id)setScreenCaptureSourceEnum:(long long)arg1;
- (id)setIsScreenRecordingValue:(_Bool)arg1;
- (id)setSendStartTimestampValue:(long long)arg1;
- (id)setObfuscationValue:(int)arg1;
- (id)setTypeVersionValue:(int)arg1;
- (id)setTypeEnum:(long long)arg1;

@end
