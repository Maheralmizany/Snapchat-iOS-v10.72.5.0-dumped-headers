//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSNumber, NSString, SCOperaPage;

@interface SCOperaMagicMomentSliderLayer : NSObject <SCOperaLayer>
{
    _Bool _isReversePlayback;
    _Bool _showSlider;
    NSNumber *_frameTime;
    double _playbackRate;
    NSString *_assetKey;
    SCOperaPage *_page;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(readonly, nonatomic) _Bool showSlider; // @synthesize showSlider=_showSlider;
@property(readonly, nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(readonly, nonatomic) _Bool isReversePlayback; // @synthesize isReversePlayback=_isReversePlayback;
@property(readonly, copy, nonatomic) NSNumber *frameTime; // @synthesize frameTime=_frameTime;
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

