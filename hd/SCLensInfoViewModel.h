//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSAEffectComponentListener.h"
#import "SCLensFrameRateCounterListener.h"
#import "SCLensInfoViewModelProtocol.h"
#import "SCLensUIUpdateListener.h"
#import "SCStudioLensLoggerListener.h"

@class LSAEffectComponent, NSArray, NSDate, NSString, SCGCDTimer, SCLens, SCLensThrottledActionPerformer, SCPreferences;

@interface SCLensInfoViewModel : NSObject <SCStudioLensLoggerListener, SCLensInfoViewModelProtocol, LSAEffectComponentListener, SCLensUIUpdateListener, SCLensFrameRateCounterListener>
{
    _Bool _qaMode;
    float _fps;
    long long _usedRam;
    long long _archiveSize;
    NSDate *_pushedDate;
    NSArray *_logs;
    NSString *_qaData;
    SCLens *_currentLens;
    SCPreferences *_userPreferences;
    SCPreferences *_lensPreferences;
    SCGCDTimer *_updateScenariumMemoryUsageTimer;
    LSAEffectComponent *_effectComponent;
    double _previousLensTotalMemoryUsage;
    double _currentLensMemoryUsage;
    SCLensThrottledActionPerformer *_throttler;
}

@property(retain, nonatomic) SCLensThrottledActionPerformer *throttler; // @synthesize throttler=_throttler;
@property(nonatomic) double currentLensMemoryUsage; // @synthesize currentLensMemoryUsage=_currentLensMemoryUsage;
@property(nonatomic) double previousLensTotalMemoryUsage; // @synthesize previousLensTotalMemoryUsage=_previousLensTotalMemoryUsage;
@property(retain, nonatomic) LSAEffectComponent *effectComponent; // @synthesize effectComponent=_effectComponent;
@property(retain, nonatomic) SCGCDTimer *updateScenariumMemoryUsageTimer; // @synthesize updateScenariumMemoryUsageTimer=_updateScenariumMemoryUsageTimer;
@property(retain, nonatomic) SCPreferences *lensPreferences; // @synthesize lensPreferences=_lensPreferences;
@property(retain, nonatomic) SCPreferences *userPreferences; // @synthesize userPreferences=_userPreferences;
@property(retain, nonatomic) SCLens *currentLens; // @synthesize currentLens=_currentLens;
@property(copy, nonatomic) NSString *qaData; // @synthesize qaData=_qaData;
@property(retain, nonatomic) NSArray *logs; // @synthesize logs=_logs;
@property(retain, nonatomic) NSDate *pushedDate; // @synthesize pushedDate=_pushedDate;
@property(nonatomic) long long archiveSize; // @synthesize archiveSize=_archiveSize;
@property(nonatomic) long long usedRam; // @synthesize usedRam=_usedRam;
@property(nonatomic) float fps; // @synthesize fps=_fps;
@property(nonatomic) _Bool qaMode; // @synthesize qaMode=_qaMode;
- (void).cxx_destruct;
- (void)performThrottledActionForSelector:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)frameRateCounter:(id)arg1 didUpdateLensFrameProcessingInfo:(CDStruct_488ba8aa)arg2;
- (void)didEndDisplayingLens:(id)arg1;
- (void)willDisplayLens:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didHideLenses;
- (void)willShowLenses;
- (void)effectComponent:(id)arg1 didInstantiatedEffectWithId:(id)arg2 isFromCache:(_Bool)arg3;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 savePersistentStore:(id)arg3;
- (void)effectComponent:(id)arg1 loadPersistentStoreForEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performInterfaceAction:(unsigned long long)arg3 interfaceElement:(unsigned long long)arg4 interfaceData:(id)arg5;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showPopUpHintWithId:(id)arg3 interfaceElement:(unsigned long long)arg4;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 performHapticFeedback:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 hideAllHintsForEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showHintWithId:(id)arg3;
- (void)effectComponent:(id)arg1 willTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 willTurnOnEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 didTurnOffEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)updateScenariumLensMemoryUsage;
- (void)updateMemoryUsage;
- (void)studioLensLogger:(id)arg1 didUpdateLogs:(id)arg2;
- (void)subscribeForStudioLensLogUpdatesWithLogger:(id)arg1;
- (id)initWithUserPreferences:(id)arg1 lensPreferences:(id)arg2 effectComponent:(id)arg3 studioLensLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

