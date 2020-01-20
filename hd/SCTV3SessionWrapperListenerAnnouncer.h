//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTV3SessionWrapperListener.h"

@class NSString;

@interface SCTV3SessionWrapperListenerAnnouncer : NSObject <SCTV3SessionWrapperListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCTV3SessionWrapperListener>, std::__1::allocator<__weak id<SCTV3SessionWrapperListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;
- (void)sessionWrapper:(id)arg1 updatedSpeechActivity:(id)arg2;
- (void)callIncompatible:(id)arg1;
- (void)sessionWrapperDisposed:(id)arg1;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
