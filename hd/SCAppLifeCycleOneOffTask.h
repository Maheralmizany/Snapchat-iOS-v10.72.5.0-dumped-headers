//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAppLifeCycleTask.h"

@class NSString, SCSentinel;

@interface SCAppLifeCycleOneOffTask : NSObject <SCAppLifeCycleTask>
{
    id <SCPerforming> _performer;
    CDUnknownBlockType _callbackBlock;
    const char *_taskDescription;
    SCSentinel *_sentinel;
    id <SCAppLifeCycleTaskDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCAppLifeCycleTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)taskDescription;
- (void)performViaToken:(_Bool)arg1;
- (id)initWithExecutionPerformer:(id)arg1 block:(CDUnknownBlockType)arg2 taskDescription:(const char *)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

