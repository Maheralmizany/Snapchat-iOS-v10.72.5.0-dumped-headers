//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPHairStyleService.h"

@class NSOperationQueue, NSString;

@interface SPHairStyleServiceImpl : NSObject <SPHairStyleService>
{
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
- (id)getPossibleHairStylesPersonProcessor:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

