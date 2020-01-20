//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SCGalleryLogger, SCSpectaclesManager;

@interface SCSpectaclesBoomboxViewingMetricsSession : NSObject
{
    id <SCSpectaclesAppLogger> _spectaclesLogger;
    SCSpectaclesManager *_spectaclesManager;
    SCGalleryLogger *_galleryLogger;
    NSMutableArray *_snapViewSessions;
    NSString *_sessionId;
    long long _viewSource;
}

- (void).cxx_destruct;
- (void)endSession;
- (void)startSnapViewSession:(id)arg1 entryId:(id)arg2;
- (id)initWithSpectaclesLogger:(id)arg1 spectaclesManager:(id)arg2 galleryLogger:(id)arg3 viewSource:(long long)arg4;

@end
