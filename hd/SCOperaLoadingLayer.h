//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSString, SCOperaPage;

@interface SCOperaLoadingLayer : NSObject <SCOperaLayer>
{
    _Bool _enableTappingNext;
    SCOperaPage *_page;
    long long _loadingState;
    NSString *_backgroundImageKey;
    NSString *_subtext;
    NSString *_errorHeaderText;
    NSString *_errorSubText;
    NSString *_errorButtonText;
    double _loadingIndicatorDelayTime;
    long long _backgroundImageContentMode;
    long long _loadingCycleStyle;
    NSString *_progressRequestId;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, copy, nonatomic) NSString *progressRequestId; // @synthesize progressRequestId=_progressRequestId;
@property(readonly, nonatomic) long long loadingCycleStyle; // @synthesize loadingCycleStyle=_loadingCycleStyle;
@property(readonly, nonatomic) long long backgroundImageContentMode; // @synthesize backgroundImageContentMode=_backgroundImageContentMode;
@property(readonly, nonatomic) _Bool enableTappingNext; // @synthesize enableTappingNext=_enableTappingNext;
@property(readonly, nonatomic) double loadingIndicatorDelayTime; // @synthesize loadingIndicatorDelayTime=_loadingIndicatorDelayTime;
@property(readonly, copy, nonatomic) NSString *errorButtonText; // @synthesize errorButtonText=_errorButtonText;
@property(readonly, copy, nonatomic) NSString *errorSubText; // @synthesize errorSubText=_errorSubText;
@property(readonly, copy, nonatomic) NSString *errorHeaderText; // @synthesize errorHeaderText=_errorHeaderText;
@property(readonly, copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
@property(readonly, copy, nonatomic) NSString *backgroundImageKey; // @synthesize backgroundImageKey=_backgroundImageKey;
@property(readonly, nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

