//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDataCoordinating.h"

@class NSString;

@protocol SCStoriesSnapPostCoordinating <SCDataCoordinating>
- (long long)postingStateWithClientId:(NSString *)arg1;
- (void)updatePostingProgress:(double)arg1 forStory:(NSString *)arg2;
- (void)updatePostingState:(long long)arg1 forStory:(NSString *)arg2;
@end

