//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SCCognacWebProxyLoadRequest, SCCognacWebProxyRequest;

@interface SCCognacWebProxyRequestItem : NSObject
{
    _Bool _cancelled;
    SCCognacWebProxyRequest *_request;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionBlock;
    SCCognacWebProxyLoadRequest *_loadRequest;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) SCCognacWebProxyLoadRequest *loadRequest; // @synthesize loadRequest=_loadRequest;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) SCCognacWebProxyRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

