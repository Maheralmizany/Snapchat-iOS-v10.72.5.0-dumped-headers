//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@class SCCStoryPlayerPlaybackOptions, SCComposerRef;

@protocol SCCStoryPlayerPlaying <NSObject, SCComposerMarshallable>
- (_Bool)isPresenting;
- (void)playItemsWithItemProvider:(void (^)(void (^)(SCCStoryPlayerItems *, NSString *)))arg1 baseView:(SCComposerRef *)arg2 options:(SCCStoryPlayerPlaybackOptions *)arg3 callback:(void (^)(NSString *))arg4;
@end

