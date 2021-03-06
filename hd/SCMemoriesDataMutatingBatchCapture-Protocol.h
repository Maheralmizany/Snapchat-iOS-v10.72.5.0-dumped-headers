//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCCloudSyncTriggerUserContext;

@protocol SCMemoriesDataMutatingBatchCapture <NSObject>
- (void)addBatchCaptureStoryWithVideoUrlsOrImages:(NSArray *)arg1 servletMediaFormats:(NSArray *)arg2 orientations:(NSArray *)arg3 overlayFormats:(NSArray *)arg4 overlays:(NSArray *)arg5 locations:(NSArray *)arg6 isPrivate:(_Bool)arg7 isAutosave:(_Bool)arg8 isInfiniteDuration:(_Bool)arg9 cameraFrontFacings:(NSArray *)arg10 createTimes:(NSArray *)arg11 timeRanges:(NSArray *)arg12 userContext:(SCCloudSyncTriggerUserContext *)arg13 currentEntry:(id <SCGalleryEntry>)arg14 isMultiSnap:(_Bool)arg15 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg16;
- (void)addMobBatchCaptureStoryWithVideoUrlsOrImages:(NSArray *)arg1 servletMediaFormats:(NSArray *)arg2 orientations:(NSArray *)arg3 overlayFormats:(NSArray *)arg4 overlays:(NSArray *)arg5 locations:(NSArray *)arg6 isPrivate:(_Bool)arg7 isInfiniteDuration:(_Bool)arg8 userContext:(SCCloudSyncTriggerUserContext *)arg9 externalId:(NSString *)arg10 displayName:(NSString *)arg11 entrySource:(long long)arg12 cameraFrontFacings:(NSArray *)arg13 createTimes:(NSArray *)arg14 timeRanges:(NSArray *)arg15 isMultiSnap:(_Bool)arg16 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg17;
@end

