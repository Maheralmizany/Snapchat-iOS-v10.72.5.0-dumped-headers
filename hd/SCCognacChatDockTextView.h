//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCCognacChatDockTextBackgroundView, SCGCDBlockTimer, UILabel;

@interface SCCognacChatDockTextView : UIView
{
    UILabel *_textLabel;
    SCCognacChatDockTextBackgroundView *_backgroundView;
    SCGCDBlockTimer *_timer;
}

- (void).cxx_destruct;
- (void)_performSinglePulseAnimation;
- (void)_performPulseAnimation;
- (void)setHidden:(_Bool)arg1 animationDelay:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

