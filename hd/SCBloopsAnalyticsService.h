//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCLazy;

@interface SCBloopsAnalyticsService : NSObject
{
    SCLazy *_bloopsAPI;
    NSMutableDictionary *_viewedBloopsInPreview;
    NSMutableDictionary *_viewedBloopsCategories;
    NSMutableDictionary *_viewedBloopsInFullscreen;
}

- (void).cxx_destruct;
- (void)_resetSession;
- (id)_processBloopId:(id)arg1;
- (id)_prepareCountDict:(id)arg1;
- (void)_addOrIncrementCounter:(id)arg1 inDict:(id)arg2;
- (id)bloopsChatDrawerActioMetadataForActionType:(long long)arg1;
- (id)sectionAnalyticsStringForDataSource:(id)arg1;
- (void)logFullscreenBloopView:(id)arg1;
- (void)logPreviewBloopView:(id)arg1 dataSource:(id)arg2;
- (id)initWithBloopsAPI:(id)arg1;

@end

