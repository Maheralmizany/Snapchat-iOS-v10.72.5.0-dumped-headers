//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCPortraitModeFaceBoundsView, UILabel;

@interface SCPortraitModeHintPresenter : NSObject
{
    UILabel *_hintLabel;
    SCPortraitModeFaceBoundsView *_faceBoundsView;
}

- (void).cxx_destruct;
- (float)_distanceBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (id)_faceBoundsFadeAnimation;
- (void)hideHintText;
- (void)showHintText:(id)arg1;
- (void)showThenHideFaceBounds;
- (void)animateFaceBoundsRectChange:(struct CGRect)arg1;
- (id)initWithHintLabel:(id)arg1 faceBoundsView:(id)arg2;

@end
