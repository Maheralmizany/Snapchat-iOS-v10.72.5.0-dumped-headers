//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIColor;

@interface SCBloopsOutlineTextLabel : UILabel
{
    UIColor *_outlineTextColor;
    double _outlineTextWidth;
}

@property(nonatomic) double outlineTextWidth; // @synthesize outlineTextWidth=_outlineTextWidth;
@property(retain, nonatomic) UIColor *outlineTextColor; // @synthesize outlineTextColor=_outlineTextColor;
- (void).cxx_destruct;
- (void)_initialSetup;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
