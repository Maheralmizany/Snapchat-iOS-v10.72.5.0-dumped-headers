//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Story;

@interface SCDelayedStoryMediaStateUpdate : NSObject
{
    Story *_story;
    long long _mediaState;
    _Bool _shouldRemoveMedia;
    _Bool _didUpdate;
}

- (void).cxx_destruct;
- (void)applyUpdate;
- (id)initWithStory:(id)arg1 mediaState:(long long)arg2 shouldRemoveMedia:(_Bool)arg3;

@end

