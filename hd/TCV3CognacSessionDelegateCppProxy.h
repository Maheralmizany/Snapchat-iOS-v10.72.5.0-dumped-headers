//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCV3CognacSessionDelegate.h"

@interface TCV3CognacSessionDelegateCppProxy : NSObject <TCV3CognacSessionDelegate>
{
    struct Handle<std::__1::shared_ptr<talkcorev3::CognacSessionDelegate>, std::__1::shared_ptr<talkcorev3::CognacSessionDelegate>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onMessage:(id)arg1 message:(id)arg2;
- (void)onConnectivityChanged;
- (void)onStateChanged;
- (void)refreshAuth:(id)arg1;
- (id)initWithCpp:(const shared_ptr_f42f8736 *)arg1;

@end

