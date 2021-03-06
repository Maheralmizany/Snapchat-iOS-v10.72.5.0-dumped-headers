//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface SCManagedVideoNoSoundLogger : NSObject
{
    _Bool _isAudioSessionDeactivated;
    int _lenseResumeCount;
    _Bool _retryAudioQueueSuccess;
    _Bool _retryAudioQueueSuccessSetDataSource;
    _Bool _lenseActiveWhileRecording;
    _Bool _audioQueueStarted;
    NSError *_audioSessionError;
    NSError *_audioQueueError;
    NSError *_assetWriterError;
    NSString *_brokenMicCodeType;
    NSString *_activeLensId;
    id <SCManiphestTicketCreator> _ticketCreator;
    CDStruct_1b6d18a9 _firstWrittenAudioBufferDelay;
}

+ (void)logNoAudioErrorEventWithIsFixed:(_Bool)arg1 fixedErrorType:(long long)arg2 unfixableErrorType:(long long)arg3 errorMessage:(id)arg4;
+ (void)logAudioSessionBrokenMicHaveBeenFixed:(id)arg1;
+ (void)logAudioSessionCategoryHaveBeenFixed;
+ (void)logVideoNoSoundHaveBeenFixedIfNeeded;
+ (id)appSessionIdForNoSound;
+ (void)startCountingVideoNoSoundHaveBeenFixed;
+ (void)increaseNoSoundCount;
+ (unsigned long long)noSoundCount;
@property(retain, nonatomic) id <SCManiphestTicketCreator> ticketCreator; // @synthesize ticketCreator=_ticketCreator;
@property(nonatomic) _Bool audioQueueStarted; // @synthesize audioQueueStarted=_audioQueueStarted;
@property(nonatomic) CDStruct_1b6d18a9 firstWrittenAudioBufferDelay; // @synthesize firstWrittenAudioBufferDelay=_firstWrittenAudioBufferDelay;
@property(retain, nonatomic) NSString *activeLensId; // @synthesize activeLensId=_activeLensId;
@property(nonatomic) _Bool lenseActiveWhileRecording; // @synthesize lenseActiveWhileRecording=_lenseActiveWhileRecording;
@property(retain, nonatomic) NSString *brokenMicCodeType; // @synthesize brokenMicCodeType=_brokenMicCodeType;
@property(nonatomic) _Bool retryAudioQueueSuccessSetDataSource; // @synthesize retryAudioQueueSuccessSetDataSource=_retryAudioQueueSuccessSetDataSource;
@property(nonatomic) _Bool retryAudioQueueSuccess; // @synthesize retryAudioQueueSuccess=_retryAudioQueueSuccess;
@property(retain, nonatomic) NSError *assetWriterError; // @synthesize assetWriterError=_assetWriterError;
@property(retain, nonatomic) NSError *audioQueueError; // @synthesize audioQueueError=_audioQueueError;
@property(retain, nonatomic) NSError *audioSessionError; // @synthesize audioSessionError=_audioSessionError;
- (void).cxx_destruct;
- (void)managedLensesProcessorDidCallResumeAllSounds;
- (void)_audioSessionDidActivate;
- (void)_audioSessionWillDeactivate;
- (_Bool)_isIPhone7Or7Plus;
- (void)checkVideoFileAndLogIfNeeded:(id)arg1;
- (void)resetAll;
- (id)init;
- (id)initWithTicketCreator:(id)arg1;

@end

