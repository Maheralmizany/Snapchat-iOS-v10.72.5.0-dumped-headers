//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensUnlockerProtocol.h"

@class NSString, SCLensScannableUnlockerImpl, SCLensSocialUnlockerImpl, SCQueuePerformer;

@interface SCLensCompoundUnlocker : NSObject <SCLensUnlockerProtocol>
{
    SCLensSocialUnlockerImpl *_socialUnlocker;
    SCLensScannableUnlockerImpl *_scannableUnlocker;
    unsigned long long _unlockFlowType;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)startCompoundUnlockerFlowForAction:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)performAction:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (id)initWithSocialUnlocker:(id)arg1 scannableUnlocker:(id)arg2 unlockFlowType:(unsigned long long)arg3 queuePerformer:(id)arg4;
- (id)initWithSocialUnlocker:(id)arg1 scannableUnlocker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

