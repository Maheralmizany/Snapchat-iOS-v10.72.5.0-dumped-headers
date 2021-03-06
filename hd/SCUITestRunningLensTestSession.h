//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensTestSessionProtocol.h"

@class LSAEffectComponent, NSError, NSURL, SCGCDTimer, SCLens, SCRunningStatistics;

@interface SCUITestRunningLensTestSession : NSObject <SCLensTestSessionProtocol>
{
    SCLens *_activeLens;
    SCRunningStatistics *_fpsStatistics;
    SCRunningStatistics *_processingTimeStatistics;
    long long _usedRam;
    double _previousLensTotalMemoryUsage;
    double _currentLensMemoryUsage;
    SCGCDTimer *_updateScenariumMemoryUsageTimer;
    NSError *_error;
    LSAEffectComponent *_effectComponent;
    id <SCPerforming> _performer;
    NSURL *_reportingRootUrl;
}

- (void).cxx_destruct;
- (id)deviceClassString;
- (id)_prepareReportingRootUrl;
- (_Bool)_logCurrent;
- (void)_lensCoreHandledAnExceptionNotificationReceived:(id)arg1;
- (void)updateScenariumLensMemoryUsage;
- (void)updateMemoryUsage;
- (void)startCollectLensMemoryUsage;
- (void)updateLensFrameProcessingInfo:(CDStruct_488ba8aa)arg1;
- (void)notifyApplyStartedWithLens:(id)arg1;
- (void)fire;
- (id)initEffectComponent:(id)arg1;

@end

