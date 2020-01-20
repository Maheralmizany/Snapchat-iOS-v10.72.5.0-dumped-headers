//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SCCheetahNewChatsAffordanceView : UIView
{
    id <SCNewChatsAffordanceDelegate> _delegate;
    UIImageView *_newChatsAffordanceCarat;
    UILabel *_label;
    unsigned long long _newChatsAffordancePosition;
}

- (void).cxx_destruct;
- (void)chatAffordanceTapped;
- (_Bool)isVisible;
- (_Bool)constrainedOnTop;
- (_Bool)constrainedOnBottom;
- (void)updateLabelForHidden;
- (void)updateLabelForBottom;
- (void)updateLabelForTop;
- (void)_setImageForBottom:(_Bool)arg1;
- (void)_setLabelText:(id)arg1;
- (double)height;
- (double)width;
- (struct CGSize)labelTextSize;
- (void)_initializeShadow;
- (void)_initializeSubviews;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

@end

