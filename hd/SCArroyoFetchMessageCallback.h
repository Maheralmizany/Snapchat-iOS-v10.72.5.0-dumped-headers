//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNMessagingFetchMessageCallback.h"

@interface SCArroyoFetchMessageCallback : NSObject <SCNMessagingFetchMessageCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

- (void).cxx_destruct;
- (void)onError:(long long)arg1;
- (void)onFetchMessageComplete:(id)arg1;
- (id)initWithSuccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2;

@end

