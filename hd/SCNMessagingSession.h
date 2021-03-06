//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNMessagingSession : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::messaging::Session>, std::__1::shared_ptr<snap::messaging::Session>> _cppRefHandle;
}

+ (void)installErrorReporter:(id)arg1;
+ (id)create:(id)arg1 keyProvider:(id)arg2 sessionDelegate:(id)arg3 conversationManagerDelegate:(id)arg4 feedManagerDelegate:(id)arg5 uploadDelegate:(id)arg6 queue:(id)arg7 taskQueueListenerDelegate:(id)arg8 sharedStorageDelegate:(id)arg9;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setDebugMode:(_Bool)arg1;
- (void)appStateChanged:(long long)arg1;
- (void)reachabilityChanged:(_Bool)arg1;
- (long long)getNetworkResourceStatus;
- (id)getSnapManager;
- (id)getFeedManager;
- (id)getConversationManager;
- (void)dispose;
- (id)initWithCpp:(const shared_ptr_dbc838bb *)arg1;

@end

