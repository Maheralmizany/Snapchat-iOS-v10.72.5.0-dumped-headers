//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class SCLoadingIndicatorView;

@interface SCBitmojiSelfieDoneButton : UIButton
{
    SCLoadingIndicatorView *_indicator;
}

@property(retain, nonatomic) SCLoadingIndicatorView *indicator; // @synthesize indicator=_indicator;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)showIndicator:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

