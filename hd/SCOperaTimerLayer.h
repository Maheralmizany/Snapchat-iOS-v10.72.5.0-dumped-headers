//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSString, SCOperaPage;

@interface SCOperaTimerLayer : NSObject <SCOperaLayer>
{
    _Bool _looping;
    _Bool _preventDecay;
    _Bool _floating;
    SCOperaPage *_page;
    unsigned long long _shape;
    double _duration;
    double _totalTimeLeft;
    double _totalDuration;
    double _mediaStartTime;
    long long _currentSegmentIndex;
    long long _numTotalSegments;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(readonly, nonatomic) _Bool preventDecay; // @synthesize preventDecay=_preventDecay;
@property(readonly, nonatomic) _Bool looping; // @synthesize looping=_looping;
@property(readonly, nonatomic) long long numTotalSegments; // @synthesize numTotalSegments=_numTotalSegments;
@property(readonly, nonatomic) long long currentSegmentIndex; // @synthesize currentSegmentIndex=_currentSegmentIndex;
@property(readonly, nonatomic) double mediaStartTime; // @synthesize mediaStartTime=_mediaStartTime;
@property(readonly, nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(readonly, nonatomic) double totalTimeLeft; // @synthesize totalTimeLeft=_totalTimeLeft;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long shape; // @synthesize shape=_shape;
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

