//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface F2FVideoCreator : NSObject
{
    struct shared_ptr<video_effects::Renderer> videoEffectsRenderer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)renderFrame:(id)arg1 index:(id)arg2;
- (void)updateRanges:(id)arg1;
- (id)initWithRanges:(id)arg1;

@end
