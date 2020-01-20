//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer, SCUserSession;

@interface SCFideliusBatchExecutor : NSObject
{
    SCUserSession *_userSession;
    NSMutableArray *_toSubmit;
    unsigned long long _backgroundTask;
    NSTimer *_timer;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_onRequestMade;
- (_Bool)_shouldDedup:(id)arg1;
- (id)_endpoint;
- (const char *)queueLabel;
- (id)_toSubmitToJson:(id)arg1;
- (CDUnknownBlockType)_failureCallback;
- (CDUnknownBlockType)_successCallback;
- (void)_makeRequest;
- (void)makeRequest;
- (double)_maxRetriesWaitTime;
- (long long)_maxRetriesBatchSize;
- (void)addToQueue:(id)arg1;
- (id)initWithUserSession:(id)arg1 useFakePerformer:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1;

@end

