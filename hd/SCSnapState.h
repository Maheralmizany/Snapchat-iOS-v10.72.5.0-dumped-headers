//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapState.h"

@class NSDate, NSDictionary, NSString;

@interface SCSnapState : NSObject <SCSnapState>
{
    _Bool _isFirstSnapInStack;
    _Bool _canBeReplayed;
    NSDictionary *_viewedTimestamps;
    NSDictionary *_screenshotState;
    NSDictionary *_screenCaptureShotState;
    NSDictionary *_screenCaptureRecordingState;
    NSDictionary *_replayState;
    NSString *_stackId;
    long long _playbackState;
    long long _replayAnimationState;
    NSDate *_lastOpenedTimestamp;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSDate *lastOpenedTimestamp; // @synthesize lastOpenedTimestamp=_lastOpenedTimestamp;
@property(readonly, nonatomic) _Bool canBeReplayed; // @synthesize canBeReplayed=_canBeReplayed;
@property(readonly, nonatomic) long long replayAnimationState; // @synthesize replayAnimationState=_replayAnimationState;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) _Bool isFirstSnapInStack; // @synthesize isFirstSnapInStack=_isFirstSnapInStack;
@property(readonly, copy, nonatomic) NSString *stackId; // @synthesize stackId=_stackId;
@property(readonly, copy, nonatomic) NSDictionary *replayState; // @synthesize replayState=_replayState;
@property(readonly, copy, nonatomic) NSDictionary *screenCaptureRecordingState; // @synthesize screenCaptureRecordingState=_screenCaptureRecordingState;
@property(readonly, copy, nonatomic) NSDictionary *screenCaptureShotState; // @synthesize screenCaptureShotState=_screenCaptureShotState;
@property(readonly, copy, nonatomic) NSDictionary *screenshotState; // @synthesize screenshotState=_screenshotState;
@property(readonly, copy, nonatomic) NSDictionary *viewedTimestamps; // @synthesize viewedTimestamps=_viewedTimestamps;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewedTimestamps:(id)arg1 screenshotState:(id)arg2 screenCaptureShotState:(id)arg3 screenCaptureRecordingState:(id)arg4 replayState:(id)arg5 stackId:(id)arg6 isFirstSnapInStack:(_Bool)arg7 playbackState:(long long)arg8 replayAnimationState:(long long)arg9 canBeReplayed:(_Bool)arg10 lastOpenedTimestamp:(id)arg11;
- (_Bool)isScreenRecorded;
- (_Bool)isScreenCaptured;
- (_Bool)isReplayed;
- (_Bool)isScreenshotted;
- (id)checkAndCorrectSnapState;
- (long long)SOJUSnapStateMessageState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

