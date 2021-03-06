//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SPScenarioSettingsModel;

@interface SPScenarioAllResourcesModel : NSObject
{
    NSString *_filesystemPath;
    NSString *_fontPath;
    SPScenarioSettingsModel *_scenarioSettingsModel;
}

@property(readonly, nonatomic) SPScenarioSettingsModel *scenarioSettingsModel; // @synthesize scenarioSettingsModel=_scenarioSettingsModel;
@property(readonly, copy, nonatomic) NSString *fontPath; // @synthesize fontPath=_fontPath;
@property(readonly, copy, nonatomic) NSString *filesystemPath; // @synthesize filesystemPath=_filesystemPath;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToResourceModel:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)framesCountForGenderType:(unsigned long long)arg1;
- (id)durationForGenderType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *fontHeight;
@property(readonly, nonatomic) NSNumber *maxCustomTextLength;
@property(readonly, nonatomic) NSString *defaultCustomText;
@property(readonly, nonatomic) _Bool isSupportCustomText;
@property(readonly, nonatomic) _Bool userScenario;
@property(readonly, nonatomic) _Bool disableWatermark;
@property(readonly, nonatomic) NSNumber *predictionFrames;
@property(readonly, nonatomic) NSNumber *fps;
- (id)audioPathForGenderType:(unsigned long long)arg1;
- (id)filesystemPathForGenderType:(unsigned long long)arg1;
- (id)subversionModelForGender:(unsigned long long)arg1;
- (id)initWithFilesystemPath:(id)arg1 fontPath:(id)arg2 scenarioSettingsModel:(id)arg3;

@end

