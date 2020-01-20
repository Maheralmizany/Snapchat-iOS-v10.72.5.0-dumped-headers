//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapAdsAdTransformListener.h"

@class NSString, SCAdResponseAdDataV2, SCDiscoverChunk;

@interface SCDiscoverChunkAdTransformListener : NSObject <SCSnapAdsAdTransformListener>
{
    SCAdResponseAdDataV2 *_adResponseV2;
    SCDiscoverChunk *_chunk;
}

@property(retain, nonatomic) SCDiscoverChunk *chunk; // @synthesize chunk=_chunk;
- (void).cxx_destruct;
- (void)_handleMediaFetchCompleteForAdKey:(id)arg1 downloadTimeInSec:(double)arg2 isSuccess:(_Bool)arg3 error:(id)arg4;
- (void)onAdTransformError:(id)arg1;
- (void)_handleMediaFetchFailure;
- (void)onAdTransformComplete:(id)arg1 shouldPredownloadMedia:(_Bool)arg2;
- (id)initWithChunk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
