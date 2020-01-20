//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSObject<OS_dispatch_semaphore>, SPImage;

@interface SPImageFetchOperation : NSOperation
{
    SPImage *_ffImage;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id <SPImageFetcher> _fetcher;
}

@property(retain, nonatomic) id <SPImageFetcher> fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SPImage *ffImage; // @synthesize ffImage=_ffImage;
- (void).cxx_destruct;
- (void)main;
- (id)initWithFetcher:(id)arg1;

@end

