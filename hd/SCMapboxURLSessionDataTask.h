//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLSessionDataTask.h"

@class SCRequest;

@interface SCMapboxURLSessionDataTask : NSURLSessionDataTask
{
    SCRequest *_request;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (long long)state;
- (void)suspend;
- (void)cancel;
- (void)resume;
- (id)initWithSCRequest:(id)arg1;

@end

