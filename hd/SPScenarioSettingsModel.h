//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SPScenarioSettingsModel : NSObject
{
    _Bool _disableWatermark;
    _Bool _userScenario;
    _Bool _isSupportCustomText;
    NSNumber *_fps;
    unsigned long long _framesCount;
    NSNumber *_predictionFrames;
    NSArray *_subversions;
    NSString *_defaultCustomText;
    NSNumber *_maxCustomTextLength;
    NSNumber *_fontHeight;
}

@property(readonly, nonatomic) NSNumber *fontHeight; // @synthesize fontHeight=_fontHeight;
@property(readonly, nonatomic) NSNumber *maxCustomTextLength; // @synthesize maxCustomTextLength=_maxCustomTextLength;
@property(readonly, nonatomic) NSString *defaultCustomText; // @synthesize defaultCustomText=_defaultCustomText;
@property(readonly, nonatomic) _Bool isSupportCustomText; // @synthesize isSupportCustomText=_isSupportCustomText;
@property(readonly, nonatomic) NSArray *subversions; // @synthesize subversions=_subversions;
@property(readonly, nonatomic) _Bool userScenario; // @synthesize userScenario=_userScenario;
@property(readonly, nonatomic) _Bool disableWatermark; // @synthesize disableWatermark=_disableWatermark;
@property(readonly, nonatomic) NSNumber *predictionFrames; // @synthesize predictionFrames=_predictionFrames;
@property(readonly, nonatomic) unsigned long long framesCount; // @synthesize framesCount=_framesCount;
@property(readonly, nonatomic) NSNumber *fps; // @synthesize fps=_fps;
- (void).cxx_destruct;
- (id)duration;
- (id)initWithDictionary:(id)arg1;

@end

