//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPHeadIconService.h"

@class NSDictionary, NSOperationQueue, NSString;

@interface SPHeadIconServiceImpl : NSObject <SPHeadIconService>
{
    NSDictionary *_iconsCache;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
- (id)cacheKeyPersonProcessor:(id)arg1 size:(struct CGSize)arg2;
- (id)headIconForPersonProcessor:(id)arg1 gender:(unsigned long long)arg2 hairStyle:(id)arg3 size:(struct CGSize)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

