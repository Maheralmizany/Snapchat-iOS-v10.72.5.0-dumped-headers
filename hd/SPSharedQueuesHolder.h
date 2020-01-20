//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface SPSharedQueuesHolder : NSObject
{
    NSOperationQueue *_animatorLoadingOperationQueue;
    NSObject<OS_dispatch_queue> *_faceAnimatorPrepareQueue;
    NSObject<OS_dispatch_queue> *_faceAnimatorProcessQueue;
    NSObject<OS_dispatch_queue> *_faceAnimatorReleaseQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *faceAnimatorReleaseQueue; // @synthesize faceAnimatorReleaseQueue=_faceAnimatorReleaseQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *faceAnimatorProcessQueue; // @synthesize faceAnimatorProcessQueue=_faceAnimatorProcessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *faceAnimatorPrepareQueue; // @synthesize faceAnimatorPrepareQueue=_faceAnimatorPrepareQueue;
@property(retain, nonatomic) NSOperationQueue *animatorLoadingOperationQueue; // @synthesize animatorLoadingOperationQueue=_animatorLoadingOperationQueue;
- (void).cxx_destruct;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)handleWillResignActiveNotification:(id)arg1;
- (id)init;

@end

