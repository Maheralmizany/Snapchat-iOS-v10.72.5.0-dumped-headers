//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensDownloadOperation.h"

#import "SCTraceEnabled.h"

@class NSString, SCLensURLDataFetcher;

@interface SCLensImageDownloadOperation : SCLensDownloadOperation <SCTraceEnabled>
{
    SCLensURLDataFetcher *_urlDataFetcher;
}

@property(retain, nonatomic) SCLensURLDataFetcher *urlDataFetcher; // @synthesize urlDataFetcher=_urlDataFetcher;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)processDataFetcherResponseForUrl:(id)arg1 image:(id)arg2 cached:(_Bool)arg3 inputSettings:(id)arg4 error:(id)arg5;
- (void)finishWithResult:(id)arg1;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 urlDataFetcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
