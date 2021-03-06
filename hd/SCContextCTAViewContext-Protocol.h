//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@class NSArray, SCContextCTAExperiments, SCContextCTATapActionMetrics;

@protocol SCContextCTAViewContext <NSObject, SCComposerMarshallable>
- (void)openURLWithUrlsInPriorityOrder:(NSArray *)arg1 tapMetrics:(SCContextCTATapActionMetrics *)arg2;
- (void)openDefaultSwipeUpContentWithTapMetrics:(SCContextCTATapActionMetrics *)arg1;
- (void)openReplyCameraWithTapMetrics:(SCContextCTATapActionMetrics *)arg1;
- (void)openReplyChatWithTapMetrics:(SCContextCTATapActionMetrics *)arg1;
- (void)openContextWithTapMetrics:(SCContextCTATapActionMetrics *)arg1;

@optional
- (SCContextCTAExperiments *)experiments;
- (double)getOverridePlaceholderIconTtlMs;
@end

