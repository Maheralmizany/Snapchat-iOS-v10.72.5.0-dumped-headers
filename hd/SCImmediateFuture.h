//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFuture.h"

@class NSError;

@interface SCImmediateFuture : SCFuture
{
    id _value;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1 performer:(id)arg2;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

