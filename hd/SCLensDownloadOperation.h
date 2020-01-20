//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString, SCLens, SCPromise;

@interface SCLensDownloadOperation : NSObject <SCTraceEnabled>
{
    NSString *_operationId;
    SCLens *_lens;
    long long _requestTiming;
    long long _fetchPriority;
    SCPromise *_resultPromise;
    NSString *_enqueuedRequestId;
}

@property(copy) NSString *enqueuedRequestId; // @synthesize enqueuedRequestId=_enqueuedRequestId;
@property(readonly, nonatomic) SCPromise *resultPromise; // @synthesize resultPromise=_resultPromise;
@property(nonatomic) long long fetchPriority; // @synthesize fetchPriority=_fetchPriority;
@property(readonly, nonatomic) long long requestTiming; // @synthesize requestTiming=_requestTiming;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
@property(readonly, copy, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)finishWithFailure:(id)arg1 settings:(id)arg2;
- (void)finishWithSuccess:(id)arg1 settings:(id)arg2;
- (void)finishWithResult:(id)arg1;
- (void)boostWithRequestTiming:(long long)arg1;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

