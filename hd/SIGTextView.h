//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, SIGLabel;

@interface SIGTextView : UITextView
{
    SIGLabel *_placeholderView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_didChange;
@property(copy, nonatomic) NSString *placeholder;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

