//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNMessagingFetchConversationCallback.h"

@interface SCArroyoFetchConversationCallback : NSObject <SCNMessagingFetchConversationCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

- (void).cxx_destruct;
- (void)onError:(long long)arg1;
- (void)onFetchConversationComplete:(id)arg1;
- (id)initWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;

@end

