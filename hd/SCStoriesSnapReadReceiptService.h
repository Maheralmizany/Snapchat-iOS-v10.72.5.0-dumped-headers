//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCStoriesSnapReadReceiptService : NSObject
{
    SCLazy *_lazySnapReadReceiptDataCoordinator;
    SCLazy *_lazySnapReadReceiptLogger;
}

@property(readonly, nonatomic) SCLazy *lazySnapReadReceiptLogger; // @synthesize lazySnapReadReceiptLogger=_lazySnapReadReceiptLogger;
@property(readonly, nonatomic) SCLazy *lazySnapReadReceiptDataCoordinator; // @synthesize lazySnapReadReceiptDataCoordinator=_lazySnapReadReceiptDataCoordinator;
- (void).cxx_destruct;
- (id)initWithSnapReadReceiptDataCoordinator:(id)arg1 logger:(id)arg2;

@end

