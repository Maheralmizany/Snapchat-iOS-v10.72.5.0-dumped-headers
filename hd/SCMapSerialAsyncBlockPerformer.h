//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SCMapSerialAsyncBlockPerformerBlockWrapper;

@interface SCMapSerialAsyncBlockPerformer : NSObject
{
    SCMapSerialAsyncBlockPerformerBlockWrapper *_performingBlock;
    NSMutableArray *_pendingBlocks;
}

- (void).cxx_destruct;
- (void)_performNextBlockIfPossible;
- (void)_cancelPending;
- (void)_cancelPerforming;
- (void)cancelAll;
- (void)submitBlock:(CDUnknownBlockType)arg1 canceled:(CDUnknownBlockType)arg2;
- (void)submitBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
