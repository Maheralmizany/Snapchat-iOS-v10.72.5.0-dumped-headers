//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SCShapeView, UILabel;

@interface SCUnifiedProfileStoriesCellTooltipView : UIView
{
    UIView *_tooltipContainer;
    SCShapeView *_tooltipTriangle;
    UILabel *_tooltipLabel;
    NSString *_tooltipText;
}

@property(retain, nonatomic) NSString *tooltipText; // @synthesize tooltipText=_tooltipText;
- (void).cxx_destruct;
- (id)_trianglePathWithBounds:(struct CGRect)arg1;
- (struct CGSize)_sizeThatFitsText;
- (struct CGSize)sizeThatFits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

