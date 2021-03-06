//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUnifiedActionMenuTextItemTableViewCell.h"

@class UIView;

@interface SCUnifiedActionMenuHeaderFooterTableViewCell : SCUnifiedActionMenuTextItemTableViewCell
{
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    _Bool _highlightOnTouch;
    unsigned long long _separatorPosition;
}

@property(nonatomic) unsigned long long separatorPosition; // @synthesize separatorPosition=_separatorPosition;
@property(nonatomic) _Bool highlightOnTouch; // @synthesize highlightOnTouch=_highlightOnTouch;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end

