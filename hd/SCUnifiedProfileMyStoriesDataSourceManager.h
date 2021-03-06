//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SCUnifiedProfileMyStoriesDataSourceManager : NSObject
{
    NSDictionary *_storyDataSourceCollection;
}

- (void).cxx_destruct;
- (void)addUpdateListener:(id)arg1 storyIdentifier:(id)arg2;
- (_Bool)canDeleteStoryForStoryId:(id)arg1;
- (_Bool)canSaveStoryForStoryId:(id)arg1;
- (void)registerStoryDataSource:(id)arg1 storyIdentifier:(id)arg2;
- (void)dismissTooltipForStoryIdentifier:(id)arg1;
- (void)updateAutosaveStoryToggleStatus:(long long)arg1 storyIdentifier:(id)arg2;
- (id)dataSourceForId:(id)arg1;
- (long long)autosaveStoryStatusForId:(id)arg1;
- (_Bool)canStoryAutosaveForStoryId:(id)arg1;
- (id)myStoriesForId:(id)arg1;
- (id)init;

@end

