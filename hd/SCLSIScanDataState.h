//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCQueuePerformer, SCSnapScannedData;

@interface SCLSIScanDataState : NSObject
{
    SCQueuePerformer *_performer;
    id <SCPerforming> _delegatePerformer;
    SCSnapScannedData *_currentScanData;
    unsigned long long _state;
    id <SCLSIScanDataStateDelegate> _delegate;
    struct NSString *_context;
}

@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_notifyStateChangedIfNeeded:(unsigned long long)arg1;
- (id)currentScanStateFuture;
- (id)currentScanDataFuture;
- (void)resetScanData;
- (void)setScanData:(id)arg1;
- (void)onScanFinished;
- (void)onScanStarted;
- (id)initWithDelegate:(id)arg1 context:(struct NSString *)arg2 delegatePerformer:(id)arg3;

@end

