//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLegacyPageViewLogger.h"
#import "SCManagedCapturerListener.h"
#import "SCPageViewGPSLogging.h"
#import "SCPageViewLogging.h"

@class NSDictionary, NSMutableDictionary, NSString, SCPerformanceResourceTracker;

@interface SCPageViewLogger : NSObject <SCManagedCapturerListener, SCPageViewGPSLogging, SCPageViewLogging, SCLegacyPageViewLogger>
{
    SCPerformanceResourceTracker *_resourceTracker;
    double _cameraOpenTimeStamp;
    double _totalCameraOpenTime;
    double _totalCameraVisibleTime;
    _Bool _isActive;
    _Bool _shouldLogPageView;
    _Bool _isCameraOn;
    NSMutableDictionary *_recordingPages;
    NSMutableDictionary *_startedPages;
    NSString *_currentPage;
    NSString *_ghostToSnappableCurrentPage;
    NSString *_sourcePage;
    id <SCPerforming> _performer;
    NSDictionary *_lastRecordingPages;
}

+ (id)shared;
@property(nonatomic) _Bool isCameraOn; // @synthesize isCameraOn=_isCameraOn;
@property(readonly, nonatomic) NSDictionary *lastRecordingPages; // @synthesize lastRecordingPages=_lastRecordingPages;
@property(nonatomic) _Bool shouldLogPageView; // @synthesize shouldLogPageView=_shouldLogPageView;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSString *sourcePage; // @synthesize sourcePage=_sourcePage;
@property(retain, nonatomic) NSString *ghostToSnappableCurrentPage; // @synthesize ghostToSnappableCurrentPage=_ghostToSnappableCurrentPage;
@property(retain, nonatomic) NSString *currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) NSMutableDictionary *startedPages; // @synthesize startedPages=_startedPages;
@property(readonly, nonatomic) NSMutableDictionary *recordingPages; // @synthesize recordingPages=_recordingPages;
- (void).cxx_destruct;
- (id)_cameraVisiblePages;
- (id)_pageToOwnerMappingDict;
- (void)_testAndRemoveStartedPage:(id)arg1;
- (void)_addStartedPage:(id)arg1;
- (void)_logPageViewSession:(id)arg1 withCpuUsageDict:(id)arg2 gpuUsageDict:(id)arg3 memoryUsageDict:(id)arg4 memoryWiredUsageDict:(id)arg5 memoryVirtualUsageDict:(id)arg6 badgeStates:(id)arg7;
- (void)_endPageView:(id)arg1 withEndTime:(double)arg2 exitEvent:(long long)arg3 badgeStates:(id)arg4;
- (void)_asyncEndAllRecordingPageViewsWithExitEvent:(long long)arg1;
- (void)didEnterBackground;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive;
- (void)_updateCameraMetricsWhenEnterBackground;
- (void)managedCapturer:(id)arg1 didStopRunning:(id)arg2;
- (void)managedCapturer:(id)arg1 didStartRunning:(id)arg2;
- (void)endPageView:(id)arg1;
- (void)gpsDidStop:(id)arg1;
- (void)gpsDidStart:(id)arg1;
- (id)ownerForPage:(id)arg1;
- (id)getPreviousPage;
- (id)getCurrentPage;
- (void)endPageView:(id)arg1 withExitEvent:(long long)arg2 badgeStates:(id)arg3;
- (void)endPageView:(id)arg1 withExitEvent:(long long)arg2;
- (void)startPageView:(id)arg1;
- (id)appSessionCameraUsage;
- (void)willEnterForeground;
- (void)pullMemoryUsage;
- (void)didPullGpuUsage:(double)arg1;
- (void)didPullCpuUsage:(double)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
