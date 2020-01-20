//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPFaceAnimatorConsumer.h"

@class FFProducer, NSString, SPPreviewsCache, SPScenario;

@interface SPFaceAnimatorImagesConsumer : NSObject <SPFaceAnimatorConsumer>
{
    _Bool _useCompressedImages;
    _Bool _finished;
    id <SPFaceAnimatorConsumerDelegate> _delegate;
    id <SPFileManager> _fileManager;
    unsigned long long _gender;
    SPScenario *_scenario;
    FFProducer *_ffProducer;
    NSString *_cacheKey;
    SPPreviewsCache *_previewsCache;
    unsigned long long _framesConsumed;
    unsigned long long _framesWritten;
}

@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) unsigned long long framesWritten; // @synthesize framesWritten=_framesWritten;
@property(nonatomic) unsigned long long framesConsumed; // @synthesize framesConsumed=_framesConsumed;
@property(retain, nonatomic) SPPreviewsCache *previewsCache; // @synthesize previewsCache=_previewsCache;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) FFProducer *ffProducer; // @synthesize ffProducer=_ffProducer;
@property(retain, nonatomic) SPScenario *scenario; // @synthesize scenario=_scenario;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool useCompressedImages; // @synthesize useCompressedImages=_useCompressedImages;
@property(retain, nonatomic) id <SPFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) __weak id <SPFaceAnimatorConsumerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tryToCommitCache;
- (void)finish;
- (void)consume:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isReadyToConsume;
- (id)postProcessFrame:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)frameProcessingStarted:(unsigned long long)arg1;
- (void)framePreloadingFinished;
- (void)framePreloadingStarted;
- (void)releaseBuffers;
- (void)initializeBuffers;
- (void)restart;
- (void)start:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *errorDomain;
- (id)initWithScenarioViewModel:(id)arg1 gender:(unsigned long long)arg2 producer:(id)arg3 previewsCache:(id)arg4 cacheKey:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
