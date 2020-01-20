//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedCapturerListener.h"

@class NSString, SCFuture, SCPromise;

@interface SCLensProcessorReadinessObserver : NSObject <SCManagedCapturerListener>
{
    SCPromise *_lensProcessorReadyPromise;
    _Bool _didCompleteLensProcessorReadyPromise;
    id <SCLensProcessorReadinessObserverDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCLensProcessorReadinessObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
@property(readonly, nonatomic) SCFuture *lensProcessorReadyFuture;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
