//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface SCVideoTracker : NSObject
{
    struct shared_ptr<ManyTargetTracker> _tracker;
    // Error parsing type: {atomic<int>="__a_"Ai}, name: _nextTargetID
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_listeners;
    struct CGSize _videoSize;
    struct CGAffineTransform _toVideoTransform;
    struct CGAffineTransform _fromVideoTransform;
    _Bool _isMultiSnap;
    int _rewindingTargetId;
    double _lastTimeRewindingTargetOnScreen;
    id <SCVideoTrackerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCVideoTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_convertOpenCVPointToUIPoint:(struct CGPoint)arg1;
- (struct CGPoint)_convertToOpenCVPoint:(struct CGPoint)arg1;
- (_Bool)_shouldStopTrackingAtTime:(CDStruct_1b6d18a9)arg1 trackingStatus:(int)arg2;
- (void)_setVideoSize:(struct CGSize)arg1;
- (void)processFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)removeTarget:(long long)arg1;
- (long long)addTargetAtPoint:(struct CGPoint)arg1 size:(struct CGSize)arg2 listener:(id)arg3 firstTimeTracking:(_Bool)arg4 notificationQueue:(id)arg5;
- (void)setVideoSize:(struct CGSize)arg1 orientation:(long long)arg2;
- (id)initWithVideoSize:(struct CGSize)arg1 orientation:(long long)arg2 isLagunaMedia:(_Bool)arg3 isMultiSnap:(_Bool)arg4;

@end

