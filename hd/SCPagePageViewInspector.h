//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSDate, UITextView, UIView;

@interface SCPagePageViewInspector : NSObject
{
    UIView *_containerView;
    UITextView *_currentPageTextView;
    UITextView *_currentPageTimerTextView;
    UITextView *_previousPagesTextView;
    CADisplayLink *_displayLink;
    NSDate *_latestStartPageTime;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_displayLinkCallback:(id)arg1;
- (void)setCurrentPageWithPageName:(id)arg1 sourcePageName:(id)arg2;
- (void)appendEventProps:(id)arg1;
- (void)hide;
- (void)show;

@end

