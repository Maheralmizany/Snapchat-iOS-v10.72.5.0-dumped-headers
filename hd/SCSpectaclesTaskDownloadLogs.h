//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSpectaclesTask.h"

@class NSArray, NSMutableData, SCWeakTimer;

@interface SCSpectaclesTaskDownloadLogs : SCSpectaclesTask
{
    _Bool _finished;
    _Bool _didTimeOut;
    NSArray *_logFileList;
    long long _currentLogIndex;
    NSMutableData *_partialLog;
    CDUnknownBlockType _callback;
    SCWeakTimer *_weakTimer;
}

@property(retain, nonatomic) SCWeakTimer *weakTimer; // @synthesize weakTimer=_weakTimer;
@property(nonatomic) _Bool didTimeOut; // @synthesize didTimeOut=_didTimeOut;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSMutableData *partialLog; // @synthesize partialLog=_partialLog;
@property(nonatomic) long long currentLogIndex; // @synthesize currentLogIndex=_currentLogIndex;
@property(retain, nonatomic) NSArray *logFileList; // @synthesize logFileList=_logFileList;
- (void).cxx_destruct;
- (id)cacheDirectory;
- (id)getLogRequestFilename:(id)arg1 range:(struct _NSRange)arg2;
- (id)logListRequest;
- (void)handleCallbackAfterDownloadingLogs;
- (_Bool)handleResponse:(id)arg1;
- (id)nextRequest:(long long)arg1;
- (void)_handleCallbackWithLogs:(id)arg1;
- (id)_filepathsInLogDirectory;
- (void)_appendLogData:(id)arg1 forLog:(id)arg2;
- (void)_clearDirectory;
- (void)_markFinished;
- (void)_timedOut;
- (void)_resetWeakTimer;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end

