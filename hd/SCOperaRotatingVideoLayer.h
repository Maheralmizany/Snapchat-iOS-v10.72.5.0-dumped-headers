//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSString, NSURL, SCOperaPage;

@interface SCOperaRotatingVideoLayer : NSObject <SCOperaLayer>
{
    _Bool _controlsEnabled;
    _Bool _audioDisabled;
    _Bool _hasFraming;
    _Bool _shouldRotate;
    _Bool _streaming;
    unsigned long long _docking;
    unsigned long long _playbackMode;
    NSURL *_url;
    NSURL *_shareableURL;
    NSString *_assetKey;
    double _controlsMinimumDuration;
    double _mediaStartTime;
    double _mediaScaleFactor;
    SCOperaPage *_page;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) _Bool streaming; // @synthesize streaming=_streaming;
@property(readonly, nonatomic) double mediaScaleFactor; // @synthesize mediaScaleFactor=_mediaScaleFactor;
@property(readonly, nonatomic) double mediaStartTime; // @synthesize mediaStartTime=_mediaStartTime;
@property(readonly, nonatomic) _Bool shouldRotate; // @synthesize shouldRotate=_shouldRotate;
@property(readonly, nonatomic) _Bool hasFraming; // @synthesize hasFraming=_hasFraming;
@property(readonly, nonatomic) double controlsMinimumDuration; // @synthesize controlsMinimumDuration=_controlsMinimumDuration;
@property(readonly, nonatomic) _Bool audioDisabled; // @synthesize audioDisabled=_audioDisabled;
@property(readonly, nonatomic) _Bool controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(readonly, copy, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(readonly, nonatomic) NSURL *shareableURL; // @synthesize shareableURL=_shareableURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(readonly, nonatomic) unsigned long long docking; // @synthesize docking=_docking;
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

