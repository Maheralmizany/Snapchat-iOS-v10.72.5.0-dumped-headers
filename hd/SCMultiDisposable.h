//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDisposableObserver.h"

@class NSArray;

@interface SCMultiDisposable : SCDisposableObserver
{
    NSArray *_disposables;
}

- (void).cxx_destruct;
- (void)dispose;
- (id)initWithDisposables:(id)arg1;

@end

