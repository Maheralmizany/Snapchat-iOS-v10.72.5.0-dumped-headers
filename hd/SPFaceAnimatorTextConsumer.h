//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPFaceAnimatorConsumer.h"
#import "SPFaceAnimatorConsumerDelegate.h"

@class F2FTextAnimator, FFProducer, NSString, SPText;

@interface SPFaceAnimatorTextConsumer : NSObject <SPFaceAnimatorConsumerDelegate, SPFaceAnimatorConsumer>
{
    _Bool _useCompressedImages;
    _Bool _cacheAfterTextRender;
    _Bool _isBuffersInitialized;
    id <SPFaceAnimatorConsumerDelegate> _delegate;
    id <SPFaceAnimatorConsumer> _cacheConsumer;
    SPText *_text;
    id <SPFontProvider> _fontProvider;
    NSString *_resourcesPath;
    FFProducer *_ffProducer;
    id <SPFaceAnimatorTextConsumerAnalytics> _analytics;
    id <SPTextProcessor> _textProcessor;
    F2FTextAnimator *_textAnimator;
    unsigned long long _framesCount;
}

@property(nonatomic) unsigned long long framesCount; // @synthesize framesCount=_framesCount;
@property _Bool isBuffersInitialized; // @synthesize isBuffersInitialized=_isBuffersInitialized;
@property(retain, nonatomic) F2FTextAnimator *textAnimator; // @synthesize textAnimator=_textAnimator;
@property(retain, nonatomic) id <SPTextProcessor> textProcessor; // @synthesize textProcessor=_textProcessor;
@property(retain, nonatomic) id <SPFaceAnimatorTextConsumerAnalytics> analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) FFProducer *ffProducer; // @synthesize ffProducer=_ffProducer;
@property(copy, nonatomic) NSString *resourcesPath; // @synthesize resourcesPath=_resourcesPath;
@property(retain, nonatomic) id <SPFontProvider> fontProvider; // @synthesize fontProvider=_fontProvider;
@property(copy, nonatomic) SPText *text; // @synthesize text=_text;
@property(nonatomic) _Bool cacheAfterTextRender; // @synthesize cacheAfterTextRender=_cacheAfterTextRender;
@property(retain, nonatomic) id <SPFaceAnimatorConsumer> cacheConsumer; // @synthesize cacheConsumer=_cacheConsumer;
@property(nonatomic) _Bool useCompressedImages; // @synthesize useCompressedImages=_useCompressedImages;
@property(nonatomic) __weak id <SPFaceAnimatorConsumerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)faceAnimatorConsumerDidFinishSuccessfully:(id)arg1;
- (void)faceAnimatorConsumer:(id)arg1 didFailWithError:(id)arg2;
- (void)faceAnimatorConsumerDidCancel:(id)arg1;
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
- (id)initWithText:(id)arg1 fontProvider:(id)arg2 resourcesPath:(id)arg3 producer:(id)arg4 cacheConsumer:(id)arg5 cacheAfterTextRender:(_Bool)arg6 textProcessor:(id)arg7 analytics:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

