//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNMessagingFetchConversationWithMessagesCallback.h"

@interface SCArroyoFetchConversationWithMessagesCallback : NSObject <SCNMessagingFetchConversationWithMessagesCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    CDUnknownBlockType _onServerRequestCallback;
}

- (void).cxx_destruct;
- (void)onServerRequest;
- (void)onError:(long long)arg1;
- (void)onFetchConversationWithMessagesComplete:(id)arg1 messages:(id)arg2;
- (id)initWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2 onServerRequestHandler:(CDUnknownBlockType)arg3;

@end

