//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>;

@interface SCSnapTokenAccessTokenFetchOperation : NSObject
{
    unsigned char _isPrefetch;
    _Bool _isCacheHit;
    unsigned long long _accessType;
    NSObject<OS_dispatch_queue> *_successQueue;
    NSObject<OS_dispatch_queue> *_failureQueue;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    NSDate *_operationStartDate;
    unsigned long long _getMode;
}

@property unsigned long long getMode; // @synthesize getMode=_getMode;
@property _Bool isCacheHit; // @synthesize isCacheHit=_isCacheHit;
@property(readonly, nonatomic) NSDate *operationStartDate; // @synthesize operationStartDate=_operationStartDate;
@property(readonly, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(readonly, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *failureQueue; // @synthesize failureQueue=_failureQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *successQueue; // @synthesize successQueue=_successQueue;
@property(readonly, nonatomic) unsigned char isPrefetch; // @synthesize isPrefetch=_isPrefetch;
@property(readonly, nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;
- (void).cxx_destruct;
- (long long)elapsedTimeMs;
- (void)sendFailure:(id)arg1;
- (void)sendSuccess:(id)arg1;
- (id)initWithAccessType:(unsigned long long)arg1 isPrefetch:(unsigned char)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end
