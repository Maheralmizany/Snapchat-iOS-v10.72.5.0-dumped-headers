//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SCMyStories;

@protocol SCExportMyStoriesManagerDelegate <NSObject>
- (void)updateSaveMyStories:(SCMyStories *)arg1 withProgress:(double)arg2;
- (void)handleSavedMyStories:(SCMyStories *)arg1 withError:(NSError *)arg2;
- (void)handleStartSavingMyStories;
@end

