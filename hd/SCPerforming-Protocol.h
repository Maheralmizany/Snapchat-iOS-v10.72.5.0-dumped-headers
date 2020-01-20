//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@protocol SCPerforming <NSObject>
- (void)performOnGroupNotification_DEPRECATED:(NSObject<OS_dispatch_group> *)arg1 block:(void (^)(void))arg2;
- (void)performWithBarrier:(void (^)(void))arg1;
- (void)assertQueue;
- (NSObject<OS_dispatch_queue> *)queue;
- (_Bool)isCurrentPerformer;
- (void)performAndWait:(void (^)(void))arg1;
- (void)perform:(void (^)(void))arg1 after:(double)arg2;
- (void)performImmediatelyIfCurrentPerformer:(void (^)(void))arg1;
- (void)performWithQoS:(unsigned int)arg1 block:(void (^)(void))arg2;
- (void)perform:(void (^)(void))arg1;
@end
